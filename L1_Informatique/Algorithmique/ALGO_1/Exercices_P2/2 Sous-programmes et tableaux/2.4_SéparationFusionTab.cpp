#include<iostream>
#include<array>
using namespace std;
//1
const int NMAX=100;
using Tableau=array<int,NMAX>;
void saisie(Tableau &T,int n){cout<<"Saisir "<<n<<" entiers : ";for(int i=0;i<n;i++) cin>>T[i];}
void affichage(Tableau T,int n){for(int i=0;i<n;i++){cout<<T[i]<<' ';}cout<<endl;}
//2
void tabInf_Sup(Tableau T,int n,int x,Tableau &U,Tableau &V){
    int indU=0,indV=0;
    for(int i=0;i<n;i++){
        if(T[i]>x){U[indU]=T[i];indU+=1;}
        else{V[indV]=T[i];indV+=1;}}}
//3
void TabTrié(Tableau U,Tableau V,Tableau &tab,int n){
    
}