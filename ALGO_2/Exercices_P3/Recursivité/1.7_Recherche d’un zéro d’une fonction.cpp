#include <iostream>
using namespace std;

float f(int x){return 48*(x*x*x)-16*(x*x)-32*x-1;}

float valeurAbs(float x){
    if(x>0) return x;
    else if(x<0) return -x;}

float max(float a,float b){
    if(a>b) return a;
    else if(a<b) return b;}

float min(float a,float b){
    if(a>b) return b;
    else if(a<b) return a;}

float diff(float a,float b){return valeurAbs(max(a,b)) - valeurAbs(min(a,b));}

void rech_zero(float a, float b){
    if(f(a)*f(b)<0){
        float valMilieuAbs= min(a,b) + diff(a,b)/2;
        if(valMilieuAbs > 0){
            rech_zero(min(a,b),valMilieuAbs);}
        else if(valMilieuAbs < 0){
            rech_zero(valMilieuAbs,max(a,b));}
    }

int main (){
    float a,b;cout<<"Intervalle [a,b] avec a != b : ";cin>>a>>b;
    rech_zero(a,b);
    //cout<<7/2<<endl;
    return 0;}


     cout<<a<<endl;}}
        else rech_zero(b,a);}
    else cout<<"Saisir au moins un nombre négatif ! Réexecuter ! "<<endl;}
