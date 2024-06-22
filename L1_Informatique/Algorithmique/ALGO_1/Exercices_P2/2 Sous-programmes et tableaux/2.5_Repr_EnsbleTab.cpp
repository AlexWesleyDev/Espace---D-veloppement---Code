#include<iostream>
#include<array>
using namespace std;
const int NMAX=100;
using Ensemble=array<int,NMAX>;
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
void devient_ensemble(Ensemble T1,int n1,Ensemble &T2,int &n2){
    Ensemble tab;int ind=0,nt=1,n2=0;tab[0]=T1[0];
    for(int i=1;i<n1;i++){
        if(not(appartient(tab,nt,T1[i]))){T2[ind]=T1[i];ind+=1;n2+=1;}
        else{tab[nt]=T1[i];nt+=1;}}}
//5
void inter_ens(Ensemble A,int nA,Ensemble B,int nB,Ensemble &I,int &nI){
    for(int i=0;i<nA;i++){
        for(int k=0;k<nB;k++){
            if(A[i]==B[k]){I[nI]=A[i];nI+=1;}}}
    Ensemble D;int nd;devient_ensemble(I,nI,D,nd);I=D;nI=nd;}

void union_ens(Ensemble A,int nA,Ensemble B,int nB,Ensemble &U,int &nU){
    nU=nA+nB;U=A;int ind=0;for(int i=nA;i<nU;i++){U[i]=B[ind];ind+=1;}}

int main(){
    Ensemble A,B,I,U;int nA,nB,nI,nU;
    return 0;}