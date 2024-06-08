#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//1
int main(){
    int p,cpt;cpt = 0;srand(time(nullptr));
    int nbreAlea = rand()%100+1;
    cout<<"Retrouver le nombre inconnu !"<<endl;
    cout<<"Proposez : ";cin>>p;
    do{
        cpt++;
        if(p>nbreAlea){
            cout<<"Trop grand. Encore : ";cin>>p;}
        else if(p<nbreAlea){
            cout<<"Trop petit. Encore : ";cin>>p;}}
    while(p!=nbreAlea);
    cout<<"Nombre inconnu trouvé : "<<nbreAlea<<endl;
    cout<<"Nombre de propositions faites : "<<cpt<<endl;
    return 0;}
//2 Version amélioré avec adaptation des réponses de l'ordinateur
int main(){
    char p;int cpt=0;int n;cout<<"Saisir un nombre entre 1 et 100 : ";cin>>n;
    srand(time(nullptr));
    int nbre = rand()%100+1;cout<<"Proposition de l'ordinateur : "<<nbre<<endl;
    do{
        cpt++;
        cout<<"M, P ou T : ";cin>>p;
        if(p=='m'){nbre=nbre+rand()%(100-nbre)+1;cout<<"Proposition de l'ordinateur : "<<nbre<<endl;}
        else{
            if(p=='p'){nbre=rand()%nbre+1;cout<<"Proposition de l'ordinateur : "<<nbre<<endl;}
            else if(p=='t' and nbre==n) break;}}
    while(n!=nbre);
    cout<<"Nombre inconnu trouvé : "<<nbre<<endl;
    cout<<"Nombre de propositions faites : "<<cpt<<endl;
    return 0;}
