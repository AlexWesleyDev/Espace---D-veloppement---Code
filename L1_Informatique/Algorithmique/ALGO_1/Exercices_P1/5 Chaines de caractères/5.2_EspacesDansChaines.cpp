#include <iostream>
#include <string>
using namespace std;

int main(){
    string ch="";cout<<"Entrez votre texte : ";getline(cin,ch);
    for (int i = 0; i < ch.length(); i++){cout<<ch[i]<<' ';}cout<<endl;//1 Aération
    string s="";for (int i = 0; i < ch.length(); i++){if(ch[i]!=' ') s=s+ch[i];};cout<<s<<endl;//2 Compression
    s="";for (int i = 0; i < ch.length(); i++){
        if(ch[i]==' ' && ch[i+1]==' ') s=s+ch[i];
        else s=s+ch[i];}cout<<s<<endl;//3 Correction
    return 0;}