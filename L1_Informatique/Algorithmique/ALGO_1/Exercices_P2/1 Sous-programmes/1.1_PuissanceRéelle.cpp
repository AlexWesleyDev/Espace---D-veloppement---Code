#include<iostream>
#include<cmath>
using namespace std;
//1
float puissance(float a,float b){
    if(a==0) return 0;
    else return exp(log(a)*b);}
//3
const int N=11;//Constante de précision au choix qui détermine le nbre de termes de la somme infinie à calculer.
int factorielle(int n){
    int fact=1;
    for(int i=n;i>0;i--){
        fact = fact*i;}
    return fact;}

float exponentielle(float x){
    float s=0;
    for(int k=0;k<N;k++){
        s=s+(puissance(x,k)/factorielle(k));} return s;}

float logarithme(float x){
    float resultat=0;
    for(int k=0;k<N;k++){
        resultat = resultat+(1/((k*2)+1))*((x-1)/(x+1))*((2*k)+1);}return 2*resultat;}
//4 Facultatif (à traiter quand même !)
//1,2,3,4
int main(){
    //cout<<puissance(3,2)<<endl;
    //cout<<puissance(0,10)<<endl;
    cout<<exponentielle(2)<<endl;
    cout<<logarithme(2)<<endl;
    
    return 0;}
