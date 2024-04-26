#include <iostream>
using namespace std;

float f(int x){return 48*(x*x*x)-16*(x*x)-32*x-1;}

float valeurAbs(float x){
    if(x>0) return x;
    else{
        if(x<0) return -x;
        else return 0;}}

float max(float a,float b){
    if(a>b) return a;
    else{
        if(a<b) return b;
        else return a;}}

float min(float a,float b){
    if(a>b) return b;
    else{
        if(a<b) return a;
        else return a;}}

float diff(float a,float b){return valeurAbs(max(a,b)) - (valeurAbs(min(a,b)));}

bool prodNegatif(float x,float y){
    if(f(x)*f(y)<0) return true;
    else return false;}

void rech_zero(float a, float b,float &valMilieu){
    if(prodNegatif(a,b)){
        valMilieu = min(a,b) + (diff(a,b)/2);
        float M=0;//test
        if(prodNegatif(valMilieu,min(a,b))) rech_zero(valMilieu,max(a,b),M);
        else rech_zero(valMilieu,min(a,b),M);}}

/*

cout<<"Valeur de a : "<<min(a,b)<<" avec f(a) : "<<f(min(a,b))<<endl;
        cout<<"Valeur de b : "<<max(a,b)<<" avec f(b) : "<<f(max(a,b))<<endl;
        cout<<"Valeur du <<milieu>> : "<<valMilieu<<" avec f(milieu) : "<<f(valMilieu)<<endl;
        cout<<"f(a)*f(b) : "<<f(a)*f(b)<<endl;cout<<"-------------------------------"<<endl;


 if(valeurAbs(diff(a,b))>0 && valeurAbs(diff(a,b))<0.1){
            valMilieu= min(a,b) + (diff(a,b)/2);
            cout<<"Valeur de a : "<<min(a,b)<<" avec f(a) : "<<f(min(a,b))<<endl;
            cout<<"Valeur de b : "<<max(a,b)<<" avec f(b) : "<<f(max(a,b))<<endl;
            cout<<"ValeurAbs(diff(a,b)) : "<<valeurAbs(diff(a,b))<<endl;
            cout<<"Valeur du <<milieu>> : "<<valMilieu<<" avec f(milieu) : "<<f(valMilieu)<<endl;
            cout<<"f(a)*f(b) : "<<f(a)*f(b)<<endl;
            cout<<"---------------FIN--------------"<<endl;}
        else{
*/

int main (){
    float a,b,M;a=0;b=0;M=0;
    do{
        while(f(a)>0){a++;}
        b=a+1;while(f(b)<0){b++;}}
    while(f(a)*f(b)>0);
    rech_zero(a,b,M);
    return 0;}
/*
//cout<<"Intervalle [a,b] avec a != b : ";cin>>a>>b;
    rech_zero(a,b);
     cout<<a<<endl;}}
        else rech_zero(b,a);}
    else cout<<"Saisir au moins un nombre négatif ! Réexecuter ! "<<endl;
    return 0;}
    --------------
    cout<<"Valeur de a : "<<a<<" avec f(a) : "<<f(a)<<endl;
    cout<<"Valeur de b : "<<b<<" avec f(b) : "<<f(b)<<endl;
    cout<<"Valeur de f(a)*f(b) : "<<f(a)*f(b)<<endl;
    */