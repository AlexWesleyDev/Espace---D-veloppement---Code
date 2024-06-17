#include<iostream>
#include<cmath>
using namespace std;
//1
void saisie(int &a,int &b,int &c){cout<<"Longueur des côtés : ";cin>>a>>b>>c;}
//2
int max(int a,int b){if(a>b) return a;else return b;}
bool valide(int a,int b,int c){
    if(a+b+c>max(max(a,b),c)) return true;
    else return false;}
//3
float perimetre(int a,int b,int c){return a+b+c;}
//4
float Aire(int a,int b,int c){
    float s=perimetre(a,b,c)/2;return sqrt(s*(s-a)*(s-b)*(s-c));}
//5
bool equilateral(int a,int b,int c){if(a==b && b==c) return true;else return false;}

bool isocele(int a,int b,int c){
    if(a==b && c!=a) return true;
    else{
        if(a==c && b!=c) return true;
        else{
            if(b==c && a!=b) return true;
            else return false;}}}

bool rectangle(int a,int b,int c){
    if(a*a==(b*b +c*c)) return true;
    else{
        if(b*b==(a*a +c*c)) return true;
        else{
            if(c*c==(a*a +b*b)) return true;
            else return false;}}}

bool plat(int a,int b,int c){
    if(sin(a)==sin(b) && sin(b)==sin(c) && sin(c)==0) return true;
    else return false;}
//6
string NatureTriangle(int a,int b,int c){
    if(equilateral(a,b,c)) return "triangle équilatéral";
    if(isocele(a,b,c)) return "triangle isocèle";
    if(plat(a,b,c)) return "triangle plat";
    if(rectangle(a,b,c)) return "triangle rectangle";
    else return "triangle quelconque";}
//7
int main(){
    int a,b,c;saisie(a,b,c);cout<<a<<b<<c<<endl;
    do{
        cout<<"Triangle invalide, recommencez."<<endl;
        saisie(a,b,c);}
    while(valide(a,b,c)==false);
    return 0;}