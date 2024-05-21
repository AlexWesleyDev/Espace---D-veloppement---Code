#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>

//1.
using namespace std;
void affichage(int *T,int n){
    for (int i = 0; i < n; i++){
        cout << T[i] << ' ';}
    cout << endl;}

void echange(int *T,int i, int j){ //Echange entre deux valeurs respectives à leur indices x et y dans T;
    int k = T[i];
    T[i] = T[j];
    T[j] = k;}

int main(){
    int n;
    cout << "Nombres n d'éléments du tableau : "; cin >> n;
    // Initialisation du tableau à titre d'exemple
    int * T = new int[n];
    srand(time(nullptr));
    for(int i = 0; i < n ; i++) T[i]= (rand() % n+1)%7;
    cout << "Tableau de départ = "; affichage(T,n);

    //Debut du programme
    int j = n-1;int p=0;int i=0;
    while(j>-1 && j>i){
        if(T[j]==0){
            p++;
            while(i<j && T[i]==0){i++;p++;}
            if(T[i]!=0){echange(T,i,j);j--;i++;}}
        else j--;}
    cout << "Après exécution --> "; affichage(T,n);cout<<endl;
    cout << "Nombre p d’éléments nuls : p = " << p << endl;cout<<endl;
    return 0;}