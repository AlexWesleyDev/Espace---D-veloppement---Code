#include <iostream>
using namespace std;
/* Détailler l’exécution du sous-programme suivant,
pour une valeur de paramètre n = 4. Que calcule-t-il ? */

int c(int n){
    if(n==1) return 1 ;
    else return c(n-1) + 2*(n-1) + 1;}
// Cette fonction calcule récursivement le carré d'un nombre
// en faisant un appel au résultat de cette même fonction pour l'entier
// précedent le N en instance jusqu'à 1. Ainsi, c(4) renvoie 16.
//Test
int main(){
    cout<<c(4)<<endl;
    return 0;}