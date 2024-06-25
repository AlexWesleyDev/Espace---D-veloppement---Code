#include <iostream>
using namespace std;
//1.
void bonjour(int n){
    if(n>0){
        cout<<"bonjour"<<" ";
        bonjour(n-1);}
    else cout<<endl;}
//2.
int sommeCarres(int n){
    if(n>0) return n*n + sommeCarres(n-1);
    else return 0;}

int main(){
    int n;cout<<"n : ";cin>>n;//bonjour(n);
    cout<<sommeCarres(n)<<endl;
    return 0;}