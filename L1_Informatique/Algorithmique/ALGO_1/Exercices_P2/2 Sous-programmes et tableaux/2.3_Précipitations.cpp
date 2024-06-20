#include<iostream>
#include<array>
using namespace std;
//1
const int N=12;
using TabPrecipitations = array<int,N>;
//2
void saisie(TabPrecipitations &tab){cout<<"Saisir les valeurs pour chaque mois : "<<endl;
    for(int i=0;i<N;i++){cout<<"Mois "<<i+1<<" : ";cin>>tab[i];}}

void affichage(TabPrecipitations tab){for(int i=0;i<N;i++){cout<<"Mois "<<i+1<<" : "<<tab[i]<<endl;}}
//3
float minimale(TabPrecipitations tab){
    int indmin=0;
    for(int i=1;i<N;i++) if(tab[i]<tab[indmin]) indmin=i;
    return tab[indmin];}

float maximale(TabPrecipitations tab){
    int indmin=0;
    for(int i=1;i<N;i++) if(tab[i]>tab[indmin]) indmin=i;
    return tab[indmin];}
//4 Avec Fonction annexes
float max(float a,float b){if(a>b) return a;else return b;}
float min(float a,float b){if(a>b) return b;else return a;}

float PlusGrandeVal(TabPrecipitations t1,TabPrecipitations t2,TabPrecipitations t3){
    float pgv=max(max(t1[0],t2[0]),t3[0]);
    for(int i=1;i<N;i++){
        if(max(max(t1[i],t2[i]),t3[i])>pgv) pgv=max(max(t1[i],t2[i]),t3[i]);}
    return pgv;}

float PlusPetiteVal(TabPrecipitations t1,TabPrecipitations t2,TabPrecipitations t3){
    float ppv=min(min(t1[0],t2[0]),t3[0]);
    for(int i=1;i<N;i++){
        if(min(min(t1[i],t2[i]),t3[i])<ppv) ppv=min(min(t1[i],t2[i]),t3[i]);}
    return ppv;}


int main(){
    TabPrecipitations Angers,Nantes,Rennes;
    cout<<"Précipitations annuelles de la ville d'Angers : "<<endl;saisie(Angers);
    cout<<"Précipitations annuelles de la ville de Nantes : "<<endl;saisie(Nantes);affichage(Nantes);
    cout<<"Précipitations annuelles de la ville de Rennes : "<<endl;saisie(Rennes);affichage(Rennes);
    cout<<"La plus grande valeur de précipitations des 3 villes : "<<PlusGrandeVal(Angers,Nantes,Rennes)<<endl;
    cout<<"La plus petite valeur de précipitations des 3 villes : "<<PlusPetiteVal(Angers,Nantes,Rennes)<<endl;
    return 0;}

