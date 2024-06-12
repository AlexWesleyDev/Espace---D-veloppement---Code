#include <iostream>
#include <array>
#include <string>

using namespace std;

int main(){
    const int N=21;array<int,N> Nb;int i,cpt;cpt=0;// i =note et cpt nbre de notes
    for(int j = 0; j < N; j++) Nb[j]=0;//Initialisation de NB à 0 pour tous ses éléments.
    cout<<"Après saisie des notes, entrez une valeur hors bornes (0- ou 20+) !"<<endl;
    cout<<"Saisir une suite de notes entre 0 et 20 : ";cin>>i;
    while(i>=0 && i<=20){cpt+=1;Nb[i]=Nb[i]+1;cin>>i;}
    //Affichage sous histogramme horizontal
    for (int i = 0; i <= N; i++){
        cout<<i<<" : ";for(int k=0;k<Nb[i];k++){cout<<'*';}
        cout<<endl;}
    //Affichage sous histogramme vertical.
    cout<<"Nb : ";for(int i=0;i<N;i++){cout<<Nb[i]<<" ";}cout<<endl;
    int indmax=0;for(int i=1;i<N;i++){if(Nb[i]>Nb[indmax]) indmax=i;}
    int n = Nb[indmax];
    cout<<Nb[0]<<' '<<Nb[1]<<' '<<Nb[2]<<' '<<Nb[3]<<endl;
    while(n>0){
        for(int i=0;i<N;i++){
            if(Nb[i]==0 or n>Nb[i]) cout<<"    ";
            else{
                if(n==Nb[i] or n<Nb[i]) {cout<<"*   ";}}}
        cout<<endl;n-=1;}

    for(int i=0;i<N;i++){
        if(i<10) cout<<i<<"   ";
        else cout<<i<<"  ";}cout<<endl;
    return 0;}