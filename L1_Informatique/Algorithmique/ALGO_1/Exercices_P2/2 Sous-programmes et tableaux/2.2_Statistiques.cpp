#include<iostream>
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
    while(age>0){
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
        if(tab[i]>0){s+=i;cpt+=1;}
    return s/cpt;}}
//6
float variance(TabAges tab){}
float ecartype(TabAges tab){}
//7
float median(TabAges tab){}
//TEST
void affichage(TabAges L){for(int i=0;i<AgeMax;i++){cout<<L[i]<<' ';}cout<<endl;}

int main(){
    TabAges tab,tab2;init(tab);init(tab2);
    saisie(tab);saisie(tab2);
    regroupe(tab,tab2);affichage(tab);
    return 0;}

