#include <iostream>
using namespace std;
//1
int main(){
    int n,s;s=0;cout<<"Saisir un entier : ";cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0) s=s+i;}
    if(s/2==n) cout<<n<<" est un nombre parfait."<<endl;
    else cout<<n<<" n'est pas un nombre parfait."<<endl;
    return 0;}
//2
int main(){
    int a,b,c,s;s=0;cout<<"Saisir une borne avec deux nombres (à la suite) : ";cin>>a>>b;
    cout<<"Tous les nombres parfaits inférieurs à la borne donnée par "<<a<<" et "<<b<<" : "<<endl;
    if(a!=b){
        if(a>b){c=b;b=a;a=c;}
        for(int n = a;n<b;n++){
            for(int i=1;i<=n;i++){
                if(n%i==0) s=s+i;}
            if(s/2==n){cout<<n<<' ';}s=0;}
        cout<<endl;}
    return 0;}