#include <iostream>
#include <array>
using namespace std;

int main(){
    const int N=100;array<int,N> S1,S2;
    int l;cout<<"Longueur des séries de nombres : ";cin>>l;
    cout<<"Première série : ";for(int i=0;i<l;i++){cin>>S1[i];};
    cout<<"Seconde série : ";for(int i=0;i<l;i++){cin>>S2[i];};
    int i=0;
    while(l>0){
        if(S1[l-1]==S2[i]){l-=1;i++;}
        else l=-1;}
    if(l==0) cout<<"Il s'agit de séries miroirs."<<endl;
    else cout<<"Il ne s'agit pas de séries miroirs."<<endl;
    return 0;}