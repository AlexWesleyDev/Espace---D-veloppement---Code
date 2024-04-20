#include <iostream>
using namespace std;

float f(int x){
    float v = 48*(x^3)-16*(x^2)-32*x-1;
    return v;}

void rech_zero(float a, float b){
    if(f(a)*f(b)<0){
        if(f(a)>0){
            if(f(a)>0.1){
                b = b + (a-b)/2;
                rech_zero(b,a);}
            else{if(f(a)>0) cout<<a<<endl;}}
        else rech_zero(b,a);}}

int main (){
    float a,b;cout<<"Intervalle [a,b] avec a et b : ";cin>>a>>b;
    cout<<a<<' '<<f(a)<<endl;
    cout<<b<<' '<<f(b)<<endl;
    //rech_zero(a,b);
    //cout<<7/2<<endl;
    return 0;
}