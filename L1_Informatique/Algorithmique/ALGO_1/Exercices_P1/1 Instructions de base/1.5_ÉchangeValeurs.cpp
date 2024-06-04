#include <iostream>
using namespace std;

int main(){
    int v1,v2;cout<<"Saisir à la suite deux entiers (v1 puis v2) : ";cin>>v1>>v2;
    cout<<"Avant : V1 = "<<v1<<" et V2 = "<<v2<<endl;int v3 = v1;v1 = v2;v2=v3;
    cout<<"Après échange des valeurs : V1 = "<<v1<<" et V2 = "<<v2<<endl;
    return 0;}
