#include<iostream>
#include<array>
using namespace std;
//1
const int NMAX=100;
using Tableau=array<int,NMAX>;
void saisie(Tableau &T,int n){cout<<"Saisir "<<n<<" entiers : ";for(int i=0;i<n;i++) cin>>T[i];}
void affichage(Tableau T,int n){for(int i=0;i<n;i++){cout<<T[i]<<' ';}cout<<endl;}
//2
void echange(Tableau &T,int n,int i,int j){
    int x=T[i];T[i]=T[j];T[j]=x;}

void tri(Tableau &T,int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(T[j]>T[i]) echange(T,n,i,j);}}}

void tabInf_Sup(Tableau T,int n,int x,Tableau &U,int &Nu,Tableau &V,int &Nv){
    int indU=0,indV=0;
    for(int i=0;i<n;i++){
        if(T[i]>x){U[indU]=T[i];indU+=1;Nu+=1;}
        else{V[indV]=T[i];indV+=1;Nv+=1;}}
    tri(U,Nu);tri(V,Nv);}
//3
void TabTriee(Tableau &T,int n,Tableau V,int Nv,Tableau U,int Nu){
    int ind=0;T=V;for(int i=Nv;i<n;i++){T[i]=U[ind];ind+=1;}}

int main(){
    Tableau T,U,V;int n,Nu=0,Nv=0;float x;
    cout<<"n : ";cin>>n;saisie(T,n);affichage(T,n);
    cout<<"X : ";cin>>x;tabInf_Sup(T,n,x,U,Nu,V,Nv);TabTriee(T,n,V,Nv,U,Nu);affichage(T,n);
    return 0;}