#include <iostream>
using namespace std;
//1 et 2
int main(){
    int n;cout<<"Saisir un entier : ";cin>>n;
    while(n!=0){
        cout<<'*';n--;
        if(n>0){cout<<'!';n--;}}
    cout<<'.'<<endl;
    return 0;}