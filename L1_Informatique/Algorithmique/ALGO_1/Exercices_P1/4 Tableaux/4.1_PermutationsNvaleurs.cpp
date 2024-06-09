#include <iostream>
#include <array>
using namespace std;
//1
int main(){
    const int N = 100;
    std::array<int,N> tab;
    int v,n,nmax;cout<<"Saisir le nombre d'entiers : ";cin>>n;nmax=n;
    cout<<"Saisir successivement "<<n<<" entiers : ";
    for(int i = 0; i < n; i++) cin>>tab[i];
    //Permutations vers la gauche
    int i = 0;
    while(i<n){
        v=tab[i];
        tab[i]=tab[n-1];
        tab[n-1]=v;
        n-=1;i+=1;}n=nmax;  
    //Affichage
    cout<<"Vers la gauche : ";for (int i = 0; i < n; i++){cout<<tab[i]<<' ';}cout<<endl;//
    //2 Permutations vers la droite
    i = 0;
    while(i<n){
        v=tab[i];
        tab[i]=tab[n-1];
        tab[n-1]=v;
        n-=1;i+=1;}n=nmax;
    ///Affichage
    cout<<"Vers la droite : ";for (int i = 0; i < n; i++){cout<<tab[i]<<' ';}cout<<endl;//
    return 0;}