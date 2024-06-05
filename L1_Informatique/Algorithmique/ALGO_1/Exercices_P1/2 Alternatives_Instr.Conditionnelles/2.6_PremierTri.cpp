#include <iostream>
using namespace std;

float Max(float a,float b){
    if(a>b) return a;
    else{
        if(a<b) return b;
        else return a;}}// Si a=b

float Min(float a,float b){
    if(a>b) return b;
    else{
        if(a<b) return a;
        else return a;}}//Si a=b

int main(){
    int v1,v2,v3;cout<<"Saisir 3 entiers : ";cin>>v1>>v2>>v3;
    cout<<"Avant : V1 = "<<v1<<", V2 = "<<v2<<", et V3 = "<<v3<<endl;
    int min = Min(Min(v1,v2),v3); int max = Max(Max(v1,v2),v3);
    if(min<v1 && v1<max) v2 = v1;
    else{
        if(min<v2 && v2<max) v2 = v2;
        else if(min<v3 && v3<max) v2 = v3;}; v1 = min; v3 = max;
    cout<<"Après tri des valeurs : V1 = "<<v1<<", V2 = "<<v2<<", et V3 = "<<v3<<endl;
    return 0;}