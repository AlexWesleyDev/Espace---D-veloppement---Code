#include <iostream>
using namespace std;
//1.
struct fraction {
    int num;
    int den;
};
//2.
struct maillon {
    fraction val;
    maillon * suiv;
};
using liste = maillon *;
//3.
void saisie(fraction f){
    int n,d;
    cout<<"Numérateur et dénominateur : ";cin>>n>>d;
    if(d==0){
        cout<<"Dénominateur non nul !"<<endl;
        saisie(f);}
    f.num = n;f.den = d;}
//4.
void ajoutEntete(liste &l,fraction f){
    liste p = new maillon;p->val.num = f.num;p->val.den = f.den;p->suiv=l;l=p;}
//5.
void supprimePremier(liste &l){liste p = l;l=l->suiv;delete p;}
//6.
int signe(fraction f1, fraction f2){
    int d = f1.num * f2.den - (f2.num * f1.den);
    if(d > 0) return 1;
    else{
        if(d==0) return 0;
        else return -1;}}
//7.
bool croissante(liste l){
    if(l->suiv== nullptr) return true;
    else{
        if(signe(l->val,l->suiv->val) <= 0) return croissante(l->suiv);
        else return false;}}
//8.
void insere(liste &l, fraction f){
    if(signe(l->val,f) < 0) ajoutEntete(l->suiv,f);
    else if(signe(l->val,f)==0) insere(l->suiv,f);}
//9.
void sans_doublons(liste &l){
    if(l->suiv!=nullptr){
        if(signe(l->val,l->suiv->val)==0) supprimePremier(l);
        else sans_doublons(l->suiv);}}


void affichefraction(fraction f){cout<<f.num<<" / "<<f.den <<endl;}
void afficheListe(liste l){
    if(l!=nullptr){
        affichefraction(l->val);
        afficheListe(l->suiv);}}
int main(){
    fraction f;liste l;l=nullptr;
    saisie(f);
    affichefraction(f);
    ajoutEntete(l,f);
    afficheListe(l);
    return 0;
}