#include <iostream>
#include <string>
using namespace std;

int main(){
    string chaine;cout<<"Saisir une chaine : ";cin>>chaine;
    char C;cout<<"Caractère à rechercher : ";cin>>C;
    int cpt=0;for(int i=0;i<chaine.length();i++) if(chaine[i]==C) cpt+=1;
    cout<<"Nombre d'occurences de "<<C<<" dans le mot "<<chaine<<" : "<<cpt<<endl;
    return 0;}
