#include<iostream>
#include<cmath>
#include<array>
using namespace std;
//1
const int AgeMax=125;
using TabAges= array<int,AgeMax>;
//2
void init(TabAges &tab){for(int i=0;i<AgeMax;i++) tab[i]=0;}
//3 Indice 0 ne compte pas.
void saisie(TabAges &tab){
    int age;cout<<"Saisir une série d'âge (0 pour arrêter): ";cin>>age;
    while(age>0 && age<125){
        for(int i=1;i<AgeMax;i++){
        if(i==age){
            tab[i]+=1;
            cin>>age;}}}}
//4
void regroupe(TabAges &tab1, TabAges tab2){
    for(int i=1;i<AgeMax;i++){
        if(tab2[i]>0) tab1[i]+=tab2[i];}}
//5 A revoir
float moyenne(TabAges tab){
    float s=0,cpt=0;
    for(int i=1;i<AgeMax;i++){
        if(tab[i]>0){
            s+=i*tab[i];
            cpt+=tab[i];}}
    return s/cpt;}
//6
float puissance(float a,float b){
    if(a==0) return 0;
    else return exp(log(a)*b);}

float variance(TabAges tab){
    float s=0,nbval=0,moy=0;for(int k=1;k<AgeMax;k++){nbval+=tab[k];}moy=moyenne(tab);
    for(int i=1;i<AgeMax;i++){
        if(tab[i]>0){
            s+=tab[i]*(i-moy)*(i-moy);}}
    return s/nbval;}
    //float variance =0;variance=s/nbval;return variance;}

float ecartype(TabAges tab){float ecartype=0;ecartype=sqrt(variance(tab));return ecartype;}
//7
float median(TabAges tab){
    float s=0,mediane=0;int nbval=0;for(int k=1;k<AgeMax;k++){nbval+=tab[k];}
    if(nbval%2!=0) mediane=(nbval/2)+1;
    else mediane=nbval/2;
    for(int m=1;m<AgeMax;m++){
        s+=tab[m];if(s>mediane) return m;}}
//TEST
void affichage(TabAges L){for(int i=0;i<AgeMax;i++){cout<<L[i]<<' ';}cout<<endl;}

int main(){
    TabAges tab,tab2;init(tab);init(tab2);
    saisie(tab);//saisie(tab2);regroupe(tab,tab2);
    affichage(tab);cout<<"Moyenne : "<<moyenne(tab)<<endl;
    cout<<"Variance : "<<variance(tab)<<endl;cout<<"Ecart-type: "<<ecartype(tab)<<endl;
    cout<<"Médiane: "<<median(tab)<<endl;
    return 0;}

