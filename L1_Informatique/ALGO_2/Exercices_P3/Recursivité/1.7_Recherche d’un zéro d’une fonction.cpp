#include <iostream>
using namespace std;

float f(float x){
    //return 48*(x*x*x)-16*(x*x)-32*x-1;}
    return 4*x*(4*x*(3*x-1)-8)-1;}
    

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

float ecart(float a,float b){return max(a,b)-min(a,b);}

void rech_zero(float a, float b){
    if(f(a)*f(b)<0){
        float valMilieu = min(a,b) + (ecart(a,b)/2);
        if(f(valMilieu)<0.1 && f(valMilieu)>0){
            cout<<"Valeur de a (minimum) : "<<min(a,b)<<" avec f(a) : "<<f(min(a,b))<<endl;
            cout<<"Valeur de b (maximum): "<<max(a,b)<<" avec f(b) : "<<f(max(a,b))<<endl;
            cout<<"Valeur écart avec A et M (A,milieu) : "<<ecart(min(a,b),valMilieu)<<endl;
            cout<<"Valeur écart entre (a,b) : "<<ecart(a,b)<<endl;
            cout<<"Valeur du <<milieu>> : "<<valMilieu<<" avec f(milieu) : "<<f(valMilieu)<<endl;}        
        else{
            if(f(valMilieu)*f(a)<0) rech_zero(valMilieu,a);
            else if(f(valMilieu)*f(b)<0) rech_zero(valMilieu,b);}}}

int main (){
    float a,b;cout<<"Valeur de a et b (à la suite) : ";cin>>a>>b;
    while(f(a)*f(b)>=0){
        cout<<"Erreur.Valeur de a et b (à la suite) : ";cin>>a>>b;}
    rech_zero(a,b);
    return 0;}