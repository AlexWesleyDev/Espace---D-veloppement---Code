#include<iostream>
using namespace std;
/*/1
- Au début du programme A, nous avons 2 pointeurs déclarés p1 et p2, avec un entier statique défini i=1,
dont la valeur sera affectée au pointeur p1 à la ligne 4 grâce au symbole &.
- Cependant à la 5ème ligne, l'adresse en mémoire de la variable de type int
qui est pointée change de valeur, passant de 1 à 2.
- De la ligne 6 à 7, la valeur de l'emplacement en mémoire de *p2 de type int créée par
l'instruction new vaut 3, qui deviendra donc la variable pointée par le pointeur *p2.
- Ligne 8, le pointeur *p1 pointe sur la variable pointée par *p2 et vaut 3.
On a donc 2 pointeurs sur une même variable, rendant l'ancienne valeur de *p1 inaccessible mais
stocké en mémoire.
- Ligne 9-10, la variable pointée par p1 est supprimée, pour créer ensuite
une nouvelle adresse mémoire qui vaudra 5, mais qui finalement sera supprimé à la suite(l-11).
En outre, le pointeur p2 ne pointe plus sur 3 vu que l'emplacement en mémoire contenant 3 a été supprimé
par l'instruction delete, alors qu'il était commun à *p1 et *p2.
//2 
Affichage produit par execution :
12,6,6
// Programme B
int main (){
    int * x;
    int * y;
    int * z ;
    x = new int ;
    y = new int ;
    z = y ;
    *y = 3 ;
    *x = *y ;
    *z = *x + *y ;
    *x = 2**y ;
    // (compléter)
    int i=(*x)/2;delete y;y=&i;z=&i;
    cout<<*x<<","<<*y<<","<<*z<<endl;
    return 0 ;}
//3
// Programme C
l
m
llm
mmm
*/