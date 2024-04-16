#include <iostream>
#include <array>
using namespace std;
const int NB_MAX_BLOCS = 30;
const int NB_MAX_CONCURRENTS = 100;
using TLigne = std::array <char,NB_MAX_BLOCS>;
using TMatrice = std::array <TLigne,NB_MAX_CONCURRENTS>;
using TStats = std :: array <int , NB_MAX_CONCURRENTS >;//5.
//1.
void saisie_resultats_un_concurrent(TMatrice &M,int numC,int B){
    cout<<" Résultats : ";
    for (int i = 0; i < B; i++){
        cin>>M[numC][i];}}
void saisie_resultats_un_concurrent1(TMatrice &M,int numC,int B){
    string ch;cout<<" Résultats : ";cin>>ch;
    for (int i = 0; i < B; i++){ // Le Test à retirer
        M[numC][i] = ch[i];}}

//2.
void saisie_resultats_tous_concurrents(TMatrice &M,int C,int B){
    for (int i = 0; i < C; i++){
        cout<<"Concurrent "<<i+1;saisie_resultats_un_concurrent1(M,i,B);}}
//3.
void affichage(TMatrice M,int C,int B){
    cout<<"Résultats du contest : "<<endl;
    for (int i = 0; i < C; i++){
        cout<<"Concurrent "<<i<<" :";
        for (int j = 0; j < B; j++){
            if(M[i][j]=='X') cout<<"  ";
            else if(M[i][j]=='T' or M[i][j]=='Z') cout<<' '<<M[i][j];}
        cout<<endl;}}
//4.
bool bloc_reussi(TMatrice M,int nbc,int numB){
    for (int i = 0; i < nbc; i++){
        if(M[i][numB]=='T') return true;}
    return false;}
//5.
void calcul_tops_zones(TStats &tops,TStats &zones,TMatrice M,int nbc,int nbreB){
   int t,z=0;
    for (int i = 0; i < nbc; i++){
        for (int j = 0; j < nbreB; j++){
            if(M[i][j]=='T') t++;
            else if(M[i][j]=='Z') z++;}
        tops[i]=t; zones[i] = z;z=0;t=0;}}
//6.
int indmax(TStats tab,int nbc){
    int ind = 0;
    for(int i = 1; i < nbc; i++){
        if(tab[i]>tab[ind]) ind = i;}
    return ind;}

int gagnant(TStats tops,TStats zones,TMatrice M,int nbc){
    int indT = indmax(tops,nbc);int g;
    for (int i = 0; i < nbc; i++){
        if(i!=indT && tops[i]==tops[indT]){
            if(zones[indT]<zones[i]) indT = i;
            else if(zones[indT]==zones[i]){cout<<"Cas non traité car 2 concurrents exaequo."<<endl;break;}}}
    return indT;}
/// TEST
void afficheTstats(TStats tab,int C){
    for (int i = 0; i < C; i++){
        cout<<" "<<tab[i];}cout<<endl;}
int main (){
    TMatrice M;TStats tops,zones;int C;int B;
    cout<<"Nombres de concurrents : ";cin>>C;
    cout<<"Nombre de blocs : ";cin>>B;
    saisie_resultats_tous_concurrents(M,C,B);
    cout<<"Matrice : "<<endl;affichage(M,C,B);
    calcul_tops_zones(tops,zones,M,C,B);
    cout<<"Tops --> ";afficheTstats(tops,C);
    cout<<"Zones --> ";afficheTstats(zones,C);
    cout<<"Indice du gagnant : "<<gagnant(tops,zones,M,C)<<endl;
    return 0;}
//// TEST