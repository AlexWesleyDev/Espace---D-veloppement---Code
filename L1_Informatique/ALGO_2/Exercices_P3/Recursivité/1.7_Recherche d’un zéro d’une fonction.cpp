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

void rech_zero(float &a, float &b,float &valMilieu){
    if(f(a)*f(b)<0){
        if(valeurAbs(diff(a,b))>0 && valeurAbs(diff(a,b))<0.1){
            valMilieu= min(a,b) + (diff(a,b)/2);
            cout<<"Valeur de a : "<<min(a,b)<<" avec f(a) : "<<f(min(a,b))<<endl;
            cout<<"Valeur de b : "<<max(a,b)<<" avec f(b) : "<<f(max(a,b))<<endl;
            cout<<"ValeurAbs(diff(a,b)) : "<<valeurAbs(diff(a,b))<<endl;
            cout<<"Valeur du <<milieu>> : "<<valMilieu<<" avec f(milieu) : "<<f(valMilieu)<<endl;
            cout<<"f(a)*f(b) : "<<f(a)*f(b)<<endl;
            cout<<"---------------FIN--------------"<<endl;}
        else{
            valMilieu = min(a,b) + (diff(a,b)/2);
            cout<<"Valeur de a : "<<min(a,b)<<" avec f(a) : "<<f(min(a,b))<<endl;
            cout<<"Valeur de b : "<<max(a,b)<<" avec f(b) : "<<f(max(a,b))<<endl;
            cout<<"Valeur du <<milieu>> : "<<valMilieu<<" avec f(milieu) : "<<f(valMilieu)<<endl;
            cout<<"f(a)*f(b) : "<<f(a)*f(b)<<endl;cout<<"-------------------------------"<<endl;
            float M;//test
            if(f(valMilieu)*f(a)>0){
                rech_zero(valMilieu,b,M);}
            else{
                if(f(valMilieu)*f(b)>0) rech_zero(valMilieu,a,M);}}}
    else{
        if(f(a)*f(b)==0){
            cout<<"Valeur de a : "<<min(a,b)<<endl;
            cout<<"Valeur de b : "<<max(a,b)<<endl;}}}

int main (){
    float a,b;a=0;b=0;
    do{
        while(f(a)>0){a++;}
        b=a+1;while(f(b)<0){b++;}}
    while(f(a)*f(b)>0);
    float M = min(a,b) + (diff(a,b)/2);
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