#include <iostream>
#include <array>
using namespace std;
 //1.
    const int N = 100;
    using Dossard = array<int,N>;
    using Temps = array<float,N>;
//2.
bool present(int num,Dossard D,int n){
    for(int i = 0; i < n; i++){if(num==D[i]) return true;}
    return false;}
//3.
void saisie(Dossard &D, Temps &t,int n){
    bool p;
    do{
        p = false;
        cout<<"Numéros des dossards : ";
        for(int i = 0; i < n; i++){
            cin>>D[i];
            if(present(D[i],D,i-1)){p=true;break;}}}
    while((p));
    cout<<"Temps respectifs de chaque dossard : ";
    for(int i = 0; i < n; i++){cin>>t[i];}}
//4.
void affiche(Dossard D,Temps t,int n){
    for (int i = 0; i < n; i++){
        cout<<"Dossard "<<D[i]<<" : "<<t[i]<<endl;}}
//5.
int indice_min(Temps t,int n){
    int ind = 0;
    for(int i = 1; i < n; i++){if(t[ind]>t[i]) ind=i;}
    return ind;}
//6.
void supprime(int ind,Dossard &D,Temps &t, int &n){    
    if(ind<n && ind >=0){
        Dossard d; Temps t1;
        for(int i = 0; i < ind; i++){
            d[i]=D[i];
            t1[i]=t[i];}
        for(int i = ind; i < n-1; i++){
            d[i] = D[i+1];
            t1[i] = t[i+1];}
        D = d;t = t1;n--;}}
//7.
int main(){
    int n;cout<<"Nombre de coureurs : ";cin>>n;
    Dossard D;Temps t;
    saisie(D,t,n);
    affiche(D,t,n);
    int ig = indice_min(t,n);cout<<"Coureur gagnant --> Dossard "<<D[ig]<<" : "<<t[ig];
    supprime(ig,D,t,n);//cout<<"Tableau après suppression : "<<endl;
    ig = indice_min(t,n);cout<<"\nCoureur second --> Dossard "<<D[ig]<<" : "<<t[ig]<<endl;
    affiche(D,t,n);
    return 0;}