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
void saisie(fraction &f){
    int n,d = 0;
    cout<<"Numérateur et dénominateur : ";cin>>n>>d;
    while(d==0){cout<<"Dénominateur non nul ! : ";cin>>d;}
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
    if(l!=nullptr){
        if(signe(l->val,f)==1) ajoutEntete(l,f);
        else insere(l->suiv,f);}
    else ajoutEntete(l,f);}
//9.
void sans_doublons(liste &l){
    if(l->suiv!=nullptr){
        if(signe(l->val,l->suiv->val)==0) supprimePremier(l);
        else sans_doublons(l->suiv);}}
        
///////////// TEST////////////////
/*
void affichefraction(fraction f){cout<<f.num<<"/"<<f.den;}
void afficheListe(liste l){
    if(l!=nullptr){
        affichefraction(l->val);
        if(l->suiv!=nullptr){
            cout<<", ";afficheListe(l->suiv);}
        else cout<<endl;}}
int main(){
    fraction f;liste l;l=nullptr;
    for(int i = 6; i > 0; i--){
        f.num = i;f.den = 1;
        ajoutEntete(l,f);}
    afficheListe(l);
    //liste p = l;supprimePremier(p);supprimePremier(p);
    //cout<<signe(p->suiv->val,p->val)<<endl;
    //cout<<croissante(l)<<endl;
    f.num=5;f.den=1;
    insere(l,f);afficheListe(l);sans_doublons(l);afficheListe(l);
    return 0;}*/