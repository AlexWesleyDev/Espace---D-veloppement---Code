#include <iostream>
#include <array>
using namespace std;

int main(){
    const int N = 5;int ref;float v,d;array<float,N> tab;
    cout<<"Saisir "<<N<<" nombres réels : ";for(int i=0;i<N;i++){cin>>tab[i];};
    cout<<"Saisir un nombre de référence : ";cin>>ref;
    float ecart=tab[0]-ref;if(ecart<0) ecart=-ecart;
    for (int i = 1; i < N; i++){
        d=tab[i]-ref;if(d<0) d=-d;
        if(ecart>d) {v=tab[i];ecart=d;}}
    cout<<v<<" est la valeur la plus proche de "<<ref<<endl;
    return 0;}