#include <iostream>

using namespace std;
//1.
void saisie(int * &T,int n){
    if(n==0){
        cout<<"Element d'indice "<<n<<" : ";cin>>T[n];}
    else{
        if(n>0){
            saisie(T,n-1);
            cout<<"Element d'indice "<<n<<" : ";cin>>T[n];}}}
//2.
bool appartient(int*T,int v,int n){
    if(n>=0){
        if(T[n]==v) return true;
        else return appartient(T,v,n-1);}
    else return false;}
//3.
int position(int*T,int v,int n){
    if(appartient(T,v,n)){
        if(T[n]==v) return n;
        else return position(T,v,n-1);}
    else return -1;}
//4.
bool appartient_mot(string mot,char c,int pos){
    if(pos<=mot.length() && pos >-1){
        if(mot[pos]==c) return true;
        else return appartient_mot(mot,c,pos+1);}
    else return false;}
//----------Fin--------------

//Facultatif
void affiche(int*T,int n){
    for(int i = 0;i<n;i++){
        cout<<T[i]<<' ';}}