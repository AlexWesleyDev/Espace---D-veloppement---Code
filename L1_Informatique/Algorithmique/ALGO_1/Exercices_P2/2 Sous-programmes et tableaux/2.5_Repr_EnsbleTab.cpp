#include<iostream>
#include<array>
using namespace std;
const int NMAX=100;
using Ensemble=array<int,NMAX>;
///////////////// A TESTER  /////////////
//1
int occurence(Ensemble T,int n,float v){int cpt=0;
    for(int i=0;i<n;i++){if(v==T[i]) cpt+=1;}return cpt;}
//2
bool appartient(Ensemble T,int n,float v){
    for(int i=0;i<n;i++){if(v==T[i]) return true;}return false;}
//3
bool ensemble(Ensemble T,int n){
    for(int i=0;i<n;i++){if(occurence(T,n,T[i])!=1) return false;}return true;}
//4
void devient_ensemble(Ensemble &T1,int &n1){
    Ensemble tab,T2;int ind=0,nt=0,n2=0;
    for(int i=0;i<n1;i++){
        if(not(appartient(tab,nt,T1[i]))){T2[ind]=T1[i];ind+=1;n2+=1;tab[nt]=T1[i];nt+=1;}
        else{tab[nt]=T1[i];nt+=1;}}T1=T2;n1=n2;}
//5
void inter_ens(Ensemble A,int nA,Ensemble B,int nB,Ensemble &I,int &nI){
    nI=0;
    for(int i=0;i<nA;i++){
        for(int k=0;k<nB;k++){
            if(A[i]==B[k]){I[nI]=A[i];nI+=1;}}}
    devient_ensemble(I,nI);}

void union_ens(Ensemble A,int nA,Ensemble B,int nB,Ensemble &U,int &nU){
    nU=nA+nB;U=A;int ind=0;for(int i=nA;i<nU;i++){U[i]=B[ind];ind+=1;}
    devient_ensemble(U,nU);}
//TEST
void affichage(Ensemble A,int n){for(int i=0;i<n;i++){cout<<A[i]<<' ';}cout<<endl;}
//int main(){return 0;}
//JEU SAUTE-MOUTON A TRAITER ULTERIEUREMENT