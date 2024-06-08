#include <iostream>
using namespace std;

//1
int main(){
    int n;cout<<"Saisir un entier positif : ";cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0) cout<<i<<' ';}
    return 0;}
//2
int main(){
    int n;bool premier = true;cout<<"Saisir un entier positif : ";cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0) premier = false;}
    if(premier==true) cout<<n<<" est un nombre premier."<<endl;
    else cout<<n<<" n'est pas un nombre premier."<<endl;
    return 0;}
//3
int main(){
    int n;bool premier = true;cout<<"Saisir successivement plusieurs nombres premiers : ";cin>>n;
    while(premier==true){
        for(int i=2;i<n;i++){
            if(n%i==0) {premier=false;break;}}
        if(premier==true) cin>>n;}
    if(premier==false) cout<<"Liste non conforme car "<<n<<" n'est pas premier !"<<endl;
    return 0;}