#include <iostream>
#include <string>
using namespace std;
//1 et 2
int main(){
    string ch="",mot="";cout<<"Entrez un mot : ";getline(cin,ch);int n;
    for(int i=0;i<ch.length();i++){
        if(ch[i]!=' ') mot+=ch[i];}
    n=mot.length()-1;
    for(int i=0;i<n;i++){
        if(n-i==i or i>n-i){cout<<ch<<" est un palindrôme !"<<endl;break;}
        else{
            if(mot[i]!=mot[n-i]){cout<<ch<<" n'est pas un palindrôme."<<endl;break;}}}
    return 0;}