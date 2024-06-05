#include <iostream>
using namespace std;
//1 et 2
int main(){
    char op;cout<<"Parent ou Enseignant, choisir parmi trois opérations (+, -,*) : ";cin>>op;
    int a,b,R;cout<<"Saisir à la suite deux nombres entiers : ";cin>>a>>b;
    if(op=='+'){
        cout<<"Elève, saisir la somme de ces deux entiers : ";cin>>R;
        if(R==a+b) cout<<"Bravo !"<<endl;
        else cout<<"Erreur ! La somme vaut "<<a+b<<'.'<<endl;}
    if(op=='-'){
        cout<<"Elève, saisir la différence de ces deux entiers : ";cin>>R;
        if(R==-(a-b)) cout<<"Bravo !"<<endl;
        else cout<<"Erreur ! La différence vaut "<<-(a-b)<<'.'<<endl;}
    if(op=='*'){
        cout<<"Elève, saisir le produit de ces deux entiers : ";cin>>R;
        if(R==a*b) cout<<"Bravo !"<<endl;
        else cout<<"Erreur ! Le produit vaut "<<a*b<<'.'<<endl;}    
    return 0;}