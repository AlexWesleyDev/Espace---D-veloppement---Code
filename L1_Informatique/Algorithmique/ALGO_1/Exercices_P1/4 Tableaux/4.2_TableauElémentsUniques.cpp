#include <iostream>
#include <array>
using namespace std;

int main(){
    const int N = 100;
    std::array<int,N> tab;
    int e,n;cout<<"Saisir des entiers : ";cin>>e;
    tab[0]=e;n=1;bool p=false;cin>>e;
    while(e>=0){
        for(int i = 0; i < n; i++){
            if(tab[i]==e) {p=true;break;}}
        if(p==false){tab[n]=e;n+=1;cin>>e;}
        else e=-1;}
    ///Affichage
    for (int i = 0; i < n; i++){cout<<tab[i]<<' ';}cout<<endl;//
    return 0;}