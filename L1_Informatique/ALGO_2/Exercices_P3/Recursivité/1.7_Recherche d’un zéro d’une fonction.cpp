#include <iostream>
using namespace std;

float f(int x){
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
        if(f(valMilieu)*f(a)<0){
            if(ecart(a,valMilieu)>0 && ecart(a,valMilieu)<0.1){//trouvee
                cout<<"Valeur de a (min) : "<<min(a,b)<<" avec f(a) : "<<f(min(a,b))<<endl;
                cout<<"Valeur de b (max): "<<max(a,b)<<" avec f(b) : "<<f(max(a,b))<<endl;
                cout<<"Valeur écart(A,milieu) : "<<ecart(a,valMilieu)<<endl;
                cout<<"Valeur écart(a,b) : "<<ecart(a,b)<<endl;
                cout<<"Valeur du <<milieu>> : "<<valMilieu<<" avec f(milieu) : "<<f(valMilieu)<<endl;
                cout<<"f(a)*f(b) : "<<f(a)*f(b)<<endl;}
            else rech_zero(valMilieu,a);}
        else{
            if(f(valMilieu)*f(b)<0){// Pas trouvee
                if(ecart(b,valMilieu)>0 && ecart(a,valMilieu)<0.1){//trouvee
                    cout<<"Valeur de a : "<<a<<" avec f(a) : "<<f(a)<<endl;
                    cout<<"Valeur de b : "<<b<<" avec f(b) : "<<f(b)<<endl;
                    cout<<"Valeur écart(B,milieu) : "<<ecart(b,valMilieu)<<endl;
                    cout<<"Valeur écart(a,b) : "<<ecart(a,b)<<endl;
                    cout<<"Valeur du <<milieu>> : "<<valMilieu<<" avec f(milieu) : "<<f(valMilieu)<<endl;
                    cout<<"f(a)*f(b) : "<<f(a)*f(b)<<endl;}
                else rech_zero(valMilieu,b);}}}}

int main (){
    float a,b,M;a=0;b=0;M=0;
    do{
        while(f(a)>0){a++;}
        b=a+1;while(f(b)<0){b++;}}
    while(f(a)*f(b)>0);
    //cout<<a<<b;
    rech_zero(a,b);
    return 0;}