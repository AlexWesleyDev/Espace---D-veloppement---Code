#include <iostream>
#include <string>
#include <array>
using namespace std;

string retourner(string s,unsigned int k){
    if(k==0) return "";
    return s[k-1] + retourner(s,k-1);}

int main (){
    std::string s;unsigned int k;
    std::cout << "Saisir une chaine : ";std::cin>>s;
    std::cout << "Saisir sa taille : ";std::cin >>k;
    //test de taille
    if(k>s.size()) cout<< "Erreur : La taille saisie dépasse la longueur véritable de la chaîne."<<endl;
    else cout<<"Chaîne inversée : "<<retourner(s, k)<<endl;
    return 0;}