#include <iostream>
using namespace std;

int main(){
    int x;cout<<"Saisir un nombre : ";cin>>x;
    cout<<"Table de multiplication de "<<x<<" :"<<endl;
    for(int i = 0;i<13;i++){
        cout<<x<<" x "<<i<<" = "<<x*i<<endl;}
    return 0;}