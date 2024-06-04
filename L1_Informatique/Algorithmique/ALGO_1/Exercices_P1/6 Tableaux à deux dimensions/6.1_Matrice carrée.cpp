#include <iostream>
#include <string>
#include <array>
using namespace std;

int main (){
    const int N = 100;
    using ligne = std::array <int,N>;
    using Matrice = std::array <ligne,N>;
    int nbline,nbcol;cout<<"Taille de la matrice carrée (ligne et colonnes idnetiques) : ";cin>>nbline>>nbcol;
    Matrice M;
    //Initialisation de la matrice
    for(int i = 0;i<nbline;i++){
        for(int j = 0;j<nbcol;j++){
            M[i][j]=0;}}
    //Affichage de la matrice
    for(int i = 0;i<nbline;i++){
        for(int j = 0;j<nbcol;j++){cout<<M[i][j];}
        cout<<endl;}
    return 0;}