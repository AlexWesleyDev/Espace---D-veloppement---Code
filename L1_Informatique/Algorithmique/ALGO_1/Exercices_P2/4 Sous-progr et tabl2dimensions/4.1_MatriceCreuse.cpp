#include<iostream>
#include<array>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
const int N=100;
using ligne=array<int,N>;
using Matrice=array<ligne,N>;
//1
void saisie(Matrice &M,int nbl,int nbc){
    cout<<"Saisir successivement "<<nbc*nbl<<" valeurs pour la matrice : ";
    for(int i=0;i<nbl;i++){
        for(int j=0;j<nbc;j++){cin>>M[i][j];}}}

void affiche(Matrice M,int nbl,int nbc){
    for(int i=0;i<nbl;i++){
        for(int j=0;j<nbc;j++){cout<<M[i][j]<<' ';}
        cout<<endl;}}
//2
float proportionZero(Matrice M,int nbl,int nbc){
    int zero=0,cpt=0;
    for(int i=0;i<nbl;i++){
        for(int j=0;j<nbc;j++){
            cpt+=1;if(M[i][j]==0){zero+=1;}}}return zero*100/cpt;}
//3
void MatriceBinaire(Matrice &M,int nbl,int nbc,float prop){//Il est préférable de placer un type int pour la proportion pour + de précision et - calculs, étant aléatoire.
    float p=0;
    while(p<prop){p=0;
        for(int i=0;i<nbl;i++){
            srand(time(nullptr));
            for(int j=0;j<nbc;j++){M[i][j]=rand()%2;}}
        affiche(M,nbl,nbc);p=proportionZero(M,nbl,nbc);cout<<"Proportion : "<<p<<" % "<<endl<<endl;}}
int main(){
    Matrice M;int nbl,nbc;cout<<"Nombre de ligne(s) et colonne(s) à la suite : ";cin>>nbl>>nbc;//saisie(M,nbl,nbc);affiche(M,nbl,nbc);
    float p;cout<<"Proportion de zéro : ";cin>>p;
    MatriceBinaire(M,nbl,nbc,p);
    return 0;}