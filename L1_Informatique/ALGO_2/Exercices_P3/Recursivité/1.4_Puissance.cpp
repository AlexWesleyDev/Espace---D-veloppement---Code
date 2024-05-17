#include <iostream>
using namespace std;
//1. 
float puissance(float x, int n){
    if (n == 0) return 1;
    else return x * puissance(x,n-1);}
// Cas n négatif
float puissanceBis(float x, int n){
    if(n == 0) return 1;
    else{
        if(n<0) return 1/puissance(x,-n);
        else return puissance(x,n);}}
//2.
float exponentiation(float x,int n){
    if(n%2==0) return puissance(x,puissance(n/2,2));
    else return x * puissance(x,puissance((n/2)+0.5,2));}
    // Si n impair, +0.5 au quotient de n/2 (ex : 2.5 --> 3) 

int main(){
    float n,x;
    cout<<"x : ";cin>>x;
    cout<<"n : ";cin>>n;
    cout<<exponentiation(x,n)<<endl;
    return 0;}
