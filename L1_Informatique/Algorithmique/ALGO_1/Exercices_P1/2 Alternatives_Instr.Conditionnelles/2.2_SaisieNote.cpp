#include <iostream>
using namespace std;
//1 Avec opérateur logique
int main (){
    int n;cout<<"Entrez une note : ";cin>>n;
    if(n>=0 && n<=20) cout<<"Note correcte"<<endl;
    else cout<<"Note incorrecte"<<endl;
    return 0;}
//2 Sans opérateur logique
int main (){
    int n;cout<<"Entrez une note : ";cin>>n;
    if(n>=0){
        if(n<=20) cout<<"Note correcte"<<endl;
        else cout<<"Note incorrecte"<<endl;}
    else cout<<"Note incorrecte"<<endl;
    return 0;}