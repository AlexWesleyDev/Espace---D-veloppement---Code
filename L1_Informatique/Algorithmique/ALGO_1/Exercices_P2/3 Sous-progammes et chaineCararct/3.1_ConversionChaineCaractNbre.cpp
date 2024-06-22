#include<iostream>
#include<string>
using namespace std;
//1
int caractereEntier(string entier){return stoi(entier);}
string entierCaractere(int e){return to_string(e);}
//2 C'est le même que pour 1
int main(){
    string entier;cout<<"Caractère : ";cin>>entier;
    cout<<"Sa valeur numérique : "<<caractereEntier(entier)<<endl;
    int e;cout<<"Entier : ";cin>>e;
    cout<<"Sa valeur en caractère : "<<entierCaractere(e)<<endl;    
    return 0;}