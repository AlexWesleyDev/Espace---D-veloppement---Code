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
    if(k>s.size() or k<s.size()){cout<< "Erreur : La taille saisie ne correspond pas à la longueur véritable de la chaîne."<<endl;
    cout<<"Chaîne inversée selon la vraie taille ("<<s.size()<<") : "<< retourner(s, s.size())<<endl;}
    else cout<<"Chaîne inversée : "<<retourner(s, k)<<endl;
    return 0;}