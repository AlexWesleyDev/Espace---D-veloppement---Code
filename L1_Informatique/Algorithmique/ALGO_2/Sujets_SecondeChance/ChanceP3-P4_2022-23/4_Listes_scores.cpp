#include <iostream>
#include <string>
#include <array>

using namespace std;
struct joueur{
    std::string nom ;
    int score ;
};

struct maillon_joueur{
    joueur val ;
    maillon_joueur * suiv ;
};
using liste_joueurs = maillon_joueur *;
//1 a).
void initListe(liste_joueurs &l){l==nullptr;}
//b).
void ajoutJoueur(liste_joueurs &l,std::string nom){
    if(l!=nullptr){
        if(l->val.nom != nom) ajoutJoueur(l->suiv,nom);
        else cout << "Joueur présent, aucun ajout possible !"<<endl;}
    else{
        liste_joueurs p;initListe(p); p->val.nom = nom; p->val.score = 0;
        p->suiv = l;l=p;}}
//c.
void ajoutNbre(liste_joueurs l,std::string nom,int p){
    if(p>0){
        if(l!=nullptr){
            if(l->val.nom==nom) l->val.score+= p;
            else ajoutNbre(l->suiv,nom,p);}
        else cout<<"Joueur non trouvé !";}}
//d.
int nbjListe(liste_joueurs l){
    if(l==nullptr) return 0;
    else return 1 + nbjListe(l->suiv);}
//2.
bool vainqueur(liste_joueurs l){
    liste_joueurs p = l;
    while(p->suiv!=nullptr){
        if(l->val.score > l->suiv->val.score) p->suiv = p->suiv->suiv;
        else{
            if(l->val.score < l->suiv->val.score) p = p->suiv;
            else return false;}}
    return true;}
//3.
void echange(joueur *T,int d,int f){
    int x = T[d].score;T[d].score = T[f].score;T[f].score = x;}

void triDecrois(liste_joueurs &l){
    int n = nbjListe(l); joueur * aux = new joueur[n];
    for (int i = n-1; i > 0; i++){
        for(int j = 0; j < i; j++){
            if(aux[j].score < aux[j+1].score){echange(aux,j,j+1);}
        }}}
// A Donner ->: Complexité de cet algorithme en fonction du nombre n de maillons, en la justifiant.
//4. a).
bool strictTotal1(liste_joueurs l){
    if(l==nullptr) return true;
    else{
        joueur J=l->val;liste_joueurs p=l->suiv;bool b=true;
        while(p!=nullptr && (b)){
            if(J.score != p->val.score) p = p->suiv;
            else{
                if(J.score==p->val.score) p=p->suiv;
                else b=false;}}
        if((b)) return strictTotal1(l->suiv);
        else return false;}}
//b).
bool strictTotal2(liste_joueurs l){
    liste_joueurs p;initListe(p);triDecrois(p);
    if(nbjListe(l)==nbjListe(p)) return true;
    else return false;}

// A Donner ->: Complexité de ces 2 algorithmes en fonction du nombre n de maillons, en la justifiant.
// TEST
void afficheListe(liste_joueurs l){
    if(l!=nullptr){
        cout<<l->val.nom<<' '<<l->val.score<<endl;
        afficheListe(l->suiv);}
    else cout<<endl;}

int main (){
    liste_joueurs l;initListe(l);
    ajoutJoueur(l,"Wesley");
    //afficheListe(l);
    return 0;}