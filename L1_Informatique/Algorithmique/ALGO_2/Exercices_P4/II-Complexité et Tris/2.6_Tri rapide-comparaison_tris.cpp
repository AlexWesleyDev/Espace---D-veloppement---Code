#include <iostream>
#include <array>
//1.
void echange(int*T,int x, int y){int v = T[x];T[x] = T[y];T[y] = v;}

int partitionnement (int * T, int d, int f){
    int p = T[f];
    int j = d;
    for (int i = d; i < f; ++i){
        if (T[i] < p){
            echange(T,i,j);
            ++j;}}
    echange(T,f,j);
    return j;}

void tri_rapide (int * T, int d, int f){
    if (f-d > 0){
        int k = partitionnement(T,d,f);
        tri_rapide(T,d,k-1);
        tri_rapide(T,k+1,f);}}

void tri_rapide (int * T, int n){tri_rapide(T,0,n-1);}
//2.
