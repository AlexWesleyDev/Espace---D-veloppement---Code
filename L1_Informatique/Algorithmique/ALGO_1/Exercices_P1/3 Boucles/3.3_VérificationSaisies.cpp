#include <iostream>
using namespace std;
//1
int main(){
    float r;cout<<"Donner un réel positif : ";cin>>r;
    do{
        cout<<"Valeur incorrecte, donner un réel positif : ";cin>>r;}
    while(r<0);
    cout<<"Merci."<<endl;
    return 0;}
//2
int main (){
    float r;cout<<"Donner un réel positif : ";cin>>r;
    do{
        cout<<"Donner un réel positif : ";cin>>r;}
    while(r<0);
    cout<<"Merci."<<endl;
    return 0;}