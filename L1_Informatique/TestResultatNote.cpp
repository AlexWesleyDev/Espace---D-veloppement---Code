#include<iostream>
#include<array>
#include<cmath>
using namespace std;

int main(){
    float Moyenne1,Moyenne2,Moyenne3,Moyenne4,Resultat;
    float Algo1,Algo2,FondInfo,BaseInfo,DevWeb,Linux,Python,BaseDonnees,Analyse,Algebre,Aritm;
    float Anglais,EEO,PPPE,CultNum,Concretisation;
    // BLOC MATHEMATIQUE
    cout<<"// BLOC MATHEMATIQUE "<<endl;
    cout<<"Note en Analyse : ";cin>>Analyse;
    cout<<"Note en Algèbre : ";cin>>Algebre;
    cout<<"Note en Arithmétique : ";cin>>Aritm;
    // BLOC FONDEMENTS ET ALGORITHMIQUE
    cout<<"// BLOC FONDEMENTS ET ALGORITHMIQUE "<<endl;
    cout<<"Note en Base d'info : ";cin>>BaseInfo;
    cout<<"Note en Algo1 : ";cin>>Algo1;
    cout<<"Note en Algo2 : ";cin>>Algo2;
    cout<<"Note en Fond.Info : ";cin>>FondInfo;
    // BLOC DEVELOPPEMENT
    cout<<"// BLOC DEVELOPPEMENT "<<endl;
    cout<<"Note en Linux : ";cin>>Linux;
    cout<<"Note en Développement WEB : ";cin>>DevWeb;
    cout<<"Note en Développement Python : ";cin>>Python;
    cout<<"Note en Base de données : ";cin>>BaseDonnees;
    // BLOC TRANSVERSAUX
    cout<<"// BLOC TRANSVERSAUX "<<endl;
    cout<<"Note en Culture numérique : ";cin>>CultNum;
    cout<<"Note en Expression Ecrite Orale : ";cin>>EEO;
    cout<<"Note en Anglais : ";cin>>Anglais;
    cout<<"Note en 3PE : ";cin>>PPPE;
    cout<<"Note en Concrétisation : ";cin>>Concretisation;
    // CALCUL
    cout<<"// CALCUL "<<endl;
    Moyenne1 = (Algo1*7 + Algo2*8 + FondInfo*6 + BaseInfo*1)/22;
    Moyenne2 = (DevWeb*4 + Linux*2 + Python*3 + BaseDonnees*4)/13;
    Moyenne3=(Analyse*5 + Algebre*5 + Aritm*3)/13;
    Moyenne4=(Anglais*1 + EEO*2 + PPPE*1 + CultNum*1 + Concretisation*5)/10;
    Resultat=(Moyenne1 + Moyenne2 + Moyenne3 + Moyenne4)/4;// MOYENNE DES 4 BLOCS
    cout<<"Moyenne Bloc F.I et ALGO : "<< Moyenne1 <<endl;
    cout<<"Moyenne Bloc Développement : "<< Moyenne2 <<endl;
    cout<<"Moyenne Bloc Mathématique : "<< Moyenne3 <<endl;
    cout<<"Moyenne Bloc Transversaux : "<< Moyenne4 <<endl;
    cout<<"Le résultat pour l'année serait de "<<Resultat<<'.'<<endl;
    return 0;}