#include <iostream>
using namespace std;

int main(){
    int n,p;p=1;cout<<"Saisir un entier : ";cin>>n;
    for(int i = n;i>0;i--){
        p = i*p;}
    cout<<"Factorielle de "<<n<<" vaut "<<p<<'.'<<endl;
    return 0;}