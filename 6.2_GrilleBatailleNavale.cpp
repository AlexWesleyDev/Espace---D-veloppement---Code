#include <iostream>
#include <string>
#include <array>
#include <cstdlib>
#include <ctime>
using namespace std;
using ligne = std::array <int,10>;
using Grille = std::array <ligne,10>;
//// A revoir

void init(Grille &G){
    for(int i = 0;i<10;i++){
        for(int j = 0;j<10;j++){
            G[i][j]=0;}
        }}

void affichage(Grille G){
    for(int i = 0;i<10;i++){
        for(int j = 0;j<10;j++){
            cout<<G[i][j];}
        cout<<endl;}}

bool SensGauche(Grille G,int l,int c,int lb){
    while(lb>0 && c>-1 && c<10){
        if(G[l][c]==0){c++;lb--;}}
    if(lb==0 && c<10) return true;
    else return false;}

bool SensDroit(Grille G,int l,int c,int lb){
    while(lb>0 && c>-1 && c<10){
        if(G[l][c]==0){c--;lb--;}}
    if(lb==0 && c>-1 && c<10) return true;
    else return false;}

bool SensHaut(Grille G,int l,int c,int lb){
    while(lb>0 && l>-1 && l<10){
        if(G[l][c]==0){l--;lb--;}}
    if(lb==0 && l>-1) return true;
    else return false;}

bool SensBas(Grille G,int l,int c,int lb){
    while(lb>0 && l>-1 && l<10){
        if(G[l][c]==0){l++;lb--;}}
    if(lb==0 && l<10) return true;
    else return false;}

bool favorable(Grille G,int l,int c,int lb,int v){
    if(SensBas(G,l,c,lb)) return true;
    else{
        if(SensHaut(G,l,c,lb)) return true;
        else{
            if(SensGauche(G,l,c,lb)) return true;
            else{
                if(SensDroit(G,l,c,lb)) return true;
                else return false;}}}}

void Placement(Grille &G,int l,int c,int lb,int v){
    if(SensBas(G,l,c,lb)){while(lb>0){G[l][c]=v;l++;lb--;}}
    else{
        if(SensHaut(G,l,c,lb)){while(lb>0){G[l][c]=v;l--;lb--;}}
        else{
            if(SensGauche(G,l,c,lb)){while(lb>0){G[l][c]=v;c++;lb--;}}
            else if(SensDroit(G,l,c,lb)){while(lb>0){G[l][c]=v;c--;lb--;}}}}}

int main (){
    const int N = 100;std::array<int,N> tab;
    Grille G;init(G);
    int nb,L,C;cout<<"Nombre de bateaux : ";cin>>nb;
    for(int i = 0;i<nb;i++){
        cout<<"Longueur du bateau no."<<i+1<<" : ";cin>>tab[i+1];}
    //Placement aléatoire dans la grille
    for(int v = 1;v<nb+1;v++){
        do{
            srand(time(nullptr));
            L = rand() % 1;
            C = rand() % 2;
        }while(not(favorable(G,L,C,tab[v],v)));
        if(favorable(G,L,C,tab[v],v)) Placement(G,L,C,tab[v],v);}
    cout<<"Grille : "<<endl;
    affichage(G);
    return 0;}
