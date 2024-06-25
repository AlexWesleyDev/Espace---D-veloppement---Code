#include<iostream>
#include<string>
using namespace std;
//1
int copie(string s,int i,int j){j=s.length()-i;return j;}
//2
void supprime(string &s,int i,int j){
    string ch="";for(int k=0;k<i;k++){ch+=s[k];}
    for(int v=i+j;v<s.length();v++){ch+=s[v];}s=ch;}
//3
void insere(string s1,string &s2,int i){
    string ch="";int ind=0,j=0;
    for(int k=i;k<s2.length();k++){
        ch+=s2[k];}
    for(int k=i;k<s1.length()+i;k++){
        s2[k]=s1[ind];ind+=1;}
    s2=s2+ch;}
//4
int position(string s1,string s2){
    int j=0,cpt=0,ind;
    for(int i=0;i<s2.length();i++){
        if(s2[i]==s1[j]){cpt+=1;j+=1;}
        if(j==1){ind=i;}}
    if(j==s1.length()) return ind;else return -1;}
//test
void affichage(string s){for(int i=0;i<s.length();i++){cout<<s[i];}cout<<endl;}
    
int main(){
    string s1,s2;int i;cout<<"Chaine principale : ";cin>>s2;cout<<"Chaine à insérer : ";cin>>s1;
    cout<<"A partir de quel position dans "<<s2<<" : ";cin>>i;insere(s1,s2,i);affichage(s2);
    cout<<"Position de "<<s1<<" dans "<<s2<<" : "<<position(s1,s2)<<endl;return 0;}