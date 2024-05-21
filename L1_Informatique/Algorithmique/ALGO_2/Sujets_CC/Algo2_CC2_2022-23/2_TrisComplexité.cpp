#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std; 
//1.
void echange(int *T,int i,int j){int v=T[i]; T[i]=T[j]; T[j]=v;}

void tri_bulle(int * T,int n){
    for(int i = n-1; i >0; i--){
        for(int j = 0; j < i; j++){
            if(T[j]>T[j+1]) echange(T,j,j+1);}}}
//2. Complexité quadratique avec n**2.
//3. Principe du tri rapide et sa complexité en moyenne : Cf Cours.

/////////// TEST////////////////
/*
void affiche(int * T,int n){
    for (int i = 0; i < n; i++){
        if(i==n-1) cout<<T[i]<<endl;
        else cout<<T[i]<<" , ";}}

void init(int *&T,int n){
    srand(time(nullptr));
    for (int i = 0; i < n; i++){T[i] = rand() % n;}}

int main(){
    int n; cout<<"N : ";cin>>n;
    int * T = new int[n];
    init(T,n);affiche(T,n);
    tri_bulle(T,n);affiche(T,n);
    return 0;}*/
