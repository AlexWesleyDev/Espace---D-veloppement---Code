#include <iostream>
#include <array>
using namespace std;

int main(){
    const int N=100;array<int,N> Nb;int i,n;n=0;
    for(int j = 0; j < N; j++) Nb[j]=0;
    cout<<"Saisir une suite de notes entre 0 et 20 : ";cin>>i;
    while(i>=0 && i<=20 && i<=100){n++;Nb[i]=Nb[i]+1;cin>>i;}
    //Affichage sous histogramme
    for (int j = 0; j < i; j++){cout<<tab[j]<<' ';}cout<<endl;
    return 0;}