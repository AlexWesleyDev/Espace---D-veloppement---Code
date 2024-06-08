#include <iostream>
using namespace std;

int puissance(int x,int n){
    if(n==0) return 1;
    else return x*puissance(x,n-1);}

int main(){
    int X,d;float coef,s=0;;cout<<"X = ";cin>>X;
    cout<<"d = ";cin>>d;
    for (int i = 0;i<=d;i++){
        cout<<"a"<<i<<" = ";cin>>coef;
        s = s+coef*puissance(X,i);coef=0;}
    cout<<"Résultat : "<<s<<endl;    
    return 0;}
// Q°: En quoi la saisie de X avant ou après le polynôme change les possibilités d’écriture de l’algorithme ?
//Saisir la valeur de X avant le polynôme permet d'éviter d'en créer un autre variable à chaque 
// itération de la boucle pour saisir les coefficients si X est saisi après le polynôme et libérer le stockage en mémoire.