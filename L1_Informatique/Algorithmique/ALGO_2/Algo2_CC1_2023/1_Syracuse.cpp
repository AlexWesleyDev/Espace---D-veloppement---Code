#include <iostream>
#include <array>
using namespace std;
//1.
void saisie(int &e){
    cout<<"Saisir un entier e : ";cin>>e;
    if(e<=0) saisie(e);}
//2.
void affichage(int e){
    if(e==1) cout<<e<<endl;
    else{
        if(e%2==0){cout<<e<<' ';affichage(e/2);}
        else{cout<<e<<' ';affichage(3*e+1);}}}
//3.
int main(){
    int e;saisie(e);
    affichage(e);
    return 0;}