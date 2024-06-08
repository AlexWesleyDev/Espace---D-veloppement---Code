#include <iostream>
#include <array>
using namespace std;

struct arret {
    std::string nom;
    int duree;};

struct maillon {
    arret val;
    maillon * suiv;};
using ligne = maillon *;
//1.
void ajoutDebut(ligne &l,arret A){ligne p = new maillon;p->val.nom = A.nom;p->val.duree = A.duree;p->suiv=l;l=p;}
void ajout_fin(ligne &l,arret A){
    if(l==nullptr) ajoutDebut(l,A);
    else ajout_fin(l->suiv,A);}
//2.
bool recherche_arret(){}
//3.
void duree_trajet(){}
//4.
void arrets_communs(){}
//5.
bool bien_formee(){}
//6.
void insertion(){}
//7.
float duree_trajet2(){}

int main(){
    ligne tramway = nullptr;arret A;
    return 0;}