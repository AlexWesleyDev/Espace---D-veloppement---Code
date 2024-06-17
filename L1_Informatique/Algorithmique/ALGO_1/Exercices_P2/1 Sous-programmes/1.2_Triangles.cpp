#include<iostream>
#include<cmath>
using namespace std;
//1
void saisie(float &a,float &b,float &c){cout<<"Longueur des côtés : ";cin>>a>>b>>c;}
//2
float max(float a,float b){if(a>b) return a;else return b;}

float min(float a,float b){if(a>b) return b;else return a;}

float milieu(float a,float b,float c){
    float mini=min(min(a,b),c);float maxi=max(max(a,b),c);
    if(mini<=a && a<=maxi) return a;
    else{
        if(mini<=b && b<=maxi) return b;
        else return c;}}

bool Valide(float a,float b,float c){
    float mini=min(min(a,b),c), maxi=max(max(a,b),c),vm=milieu(a,b,c);
    if(mini+vm>maxi) return true;
    else return false;}
//3
float perimetre(float a,float b,float c){return a+b+c;}
//4
float Aire(float a,float b,float c){
    float s=perimetre(a,b,c)/2;return sqrt(s*(s-a)*(s-b)*(s-c));}
//5
bool equilateral(float a,float b,float c){if(a==b && b==c) return true;else return false;}

bool isocele(float a,float b,float c){
    if(a==b && c!=a) return true;
    else{
        if(a==c && b!=c) return true;
        else{
            if(b==c && a!=b) return true;
            else return false;}}}

bool rectangle(float a,float b,float c){
    if(a*a==(b*b +c*c)) return true;
    else{
        if(b*b==(a*a +c*c)) return true;
        else{
            if(c*c==(a*a +b*b)) return true;
            else return false;}}}

bool plat(float a,float b,float c){
    if(sin(a)==sin(b) && sin(b)==sin(c) && sin(c)==0) return true;
    else return false;}
//6
string NatureTriangle(float a,float b,float c){
    if(equilateral(a,b,c)) return "triangle équilatéral";
    if(isocele(a,b,c)) return "triangle isocèle";
    if(plat(a,b,c)) return "triangle plat";
    if(rectangle(a,b,c)) return "triangle rectangle";
    else return "triangle quelconque";}
//7
int main(){
    float a,b,c;saisie(a,b,c);
    while(Valide(a,b,c)==false){
        cout<<"Triangle invalide, recommencez."<<endl;
        saisie(a,b,c);}
    cout<<"Il s'agit d'un "<<NatureTriangle(a,b,c)<<" de périmètre "<<perimetre(a,b,c)<<" et d'aire "<<Aire(a,b,c)<<endl;
    return 0;}