#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    string pendu="",mystere="";cout<<"Entrez votre mot mystère : ";cin>>mystere;std::system("clear");
    for(int i=0;i<mystere.length();i++){pendu+='_';}cout<<"Mot mystère : "<<pendu<<endl;
    char l;int essai=0;
    do{
        essai+=1;
        cout<<"Entrez une lettre : ";cin>>l;
        for(int i=0;i<mystere.length();i++){
            if(l==mystere[i]) pendu[i]=mystere[i];}
        if(essai>1) cout<<"Après "<<essai<<" essais, voici le mot mystère : "<<pendu<<endl;
        else cout<<"Après "<<essai<<" essai, voici le mot mystère : "<<pendu<<endl;}while(mystere!=pendu);
    return 0;}
