#include <iostream>
#include <string>
#include <array>

////////// A REFAIRE /////////////////

std::string retourner(std::string &s,int k){
    if(k==0) return s[k];
    else{
        if(k>0) return s[k-1] + retourner(s,k--);}}

int main (){
    std::string s;int k;
    std::cout << "Saisir une chaine : ";std::cin>>s;
    std::cout << "Saisir sa taille : ";std::cin >>k;
    std::cout<<retourner(s,k)<<std::endl;
    return 0;
}