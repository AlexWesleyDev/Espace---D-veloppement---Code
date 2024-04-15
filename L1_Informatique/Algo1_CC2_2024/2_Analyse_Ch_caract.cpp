#include <iostream>
#include <string>
#include <array>
using namespace std;
//1.
void saisie(std::string &ch){cout<<"Chaîne de X et O : ";cin>>ch;}
//2.
int nbreX(std::string ch){
    unsigned int i =0;int cpt = 0;
    while(ch[i]=='X' or ch[i]=='O'){
        if(ch[i]=='X') cpt++;
        i++;}
    return cpt;}
//3.
std::string chaineSansX(std::string ch){
    unsigned int i = 0; std::string s="";
    while(ch[i]=='X' or ch[i]=='O'){
        if(ch[i]=='O') s = s + ch[i];
        i++;}
    return s;}
//4.
std::string chaineXO(std::string m){
    int i = 0;std::string s="";
    while(m[i]=='X' or m[i]=='O'){
        if(m[i]=='X') s = s+m[i];
        i++;}s = s+chaineSansX(m);
    return s;}
//5.
int main(){
    std::string ch = "XXOOOXOXOOOX";//saisie(ch);
    cout<<ch<<" -> "<<nbreX(ch)<<endl;
    cout<<ch<<" -> "<<chaineSansX(ch)<<endl;
    cout<<ch<<" -> "<<chaineXO(ch)<<endl;
    return 0;}