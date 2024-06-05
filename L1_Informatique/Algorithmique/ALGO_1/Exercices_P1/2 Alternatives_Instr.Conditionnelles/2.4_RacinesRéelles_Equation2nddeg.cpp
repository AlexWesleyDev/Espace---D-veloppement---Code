#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,b,c,Delta;
    cout<<"Saisir à la suite les coefficients a, b et c d’une équation du second degré : ";cin>>a>>b>>c;
    cout<<"Résolution de l'équation "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0 dans R : "<<endl;
    Delta = b*b - 4*a*c;cout<<"Delta vaut "<<Delta<<endl;
    if(Delta>=0){
        if(Delta==0){
            float So = -(b/(2*a));
            cout<<"L'équation admet une seule racine dans R qui vaut "<<So<<endl;}
        else{
            float x1,x2; x1 = (-b + sqrt(Delta))/2*a; x2 = (-b - sqrt(Delta))/2*a;
            cout<<"Les racines de l'équation sont : x1 = "<<x1<<" et x2 = "<<x2<<'.'<<endl;}}
    else cout<<"Ensemble vide. Pas de solution !"<<endl;
    return 0;}

//Exercice 2.5 sur les racines complexes d’une équation du second degré est facultatif.