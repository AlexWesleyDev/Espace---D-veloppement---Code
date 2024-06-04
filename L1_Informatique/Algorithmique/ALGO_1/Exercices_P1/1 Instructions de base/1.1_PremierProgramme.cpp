#include <iostream>
using namespace std;

float max(int x,int y){
    if(x>y) return x;
    else return y;}

float min(int x,int y){
    if(x>y) return y;
    else return x;}

int main (){
    float n1,n2;
    cout<<"Entrez un entier : ";cin>>n1;
    cout<<"Entrez un autre entier : ";cin>>n2;
    cout<<"Le produit de "<<max(n1,n2)<<" par "<<min(n1,n2)<<" est "<<n1*n2<<'.'<<endl;
    return 0;}

// Réponse de l'exercice 1.2_Compilation et Exécution
// -----> @AlexPog70 ➜ .../1 Instructions de base $ g++ 1.1_PremierProgramme.cpp -o test.out;./test.out