#include <iostream>

using namespace std;

int f(int x,int y){ // x>=0
    if(x==0) return y;
    return f(x-1,x+y);}

void f1(int x,int y){ // x >=0
    if(x==0){cout<<"Pour X = "<< x << ", y vaut "<<y<<endl;}
    else{
        cout<<"Pour X = "<< x << ", y vaut "<<y<<endl;
        f1(x-1,x+y);}}

int main(){
    int x,y;cout<<"Que vaut f(5, 2) ?"<<endl;
    cout<<" X et y : ";cin>>x>>y;
    cout<<"Cela vaut : "<< f(x,y)<<endl;
    f1(x,y);
    return 0;}

//1. Que vaut f(5, 2) ? --> 17 après exécution
//2. En déduire une expression (mathématique) de f en fonction de x et de y. --> On a pour tout x,y => 0, on a : f(x,y) = (x**2 + x + 2y)/2.