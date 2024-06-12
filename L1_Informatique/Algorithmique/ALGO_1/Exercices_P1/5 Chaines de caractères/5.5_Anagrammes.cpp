#include <iostream>
#include <string>
using namespace std;

int main(){
    string ch1="",ch2="";cout<<"Saisir deux chaînes : ";cin>>ch1>>ch2;int cpt=0;string ch=ch2;
    if(ch1.length()==ch2.length()){
        for(int i=0;i<ch1.length();i++){
            for(int j=0;j<ch2.length();j++){
                if(ch1[i]==ch2[j]){cpt+=1;ch2[j]=' ';}}}ch2=ch;
        if(cpt==ch1.length()) cout<<ch2<<" est une anagramme de "<<ch1<<" et réciproquement !"<<endl;
        else cout<<ch1<<" n’est pas une anagramme de "<<ch2<<endl;}
    else cout<<ch2<<" n’est pas une anagramme de "<<ch1<<endl;
    return 0;}
