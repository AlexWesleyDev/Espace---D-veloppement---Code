#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>
//2.
const int k = 5; // Par défaut k = 5, sinon valeur au choix.
using namespace std;

void affichage(int*T,int n){
    if(n>0){
        affichage(T,n-1);
        cout << T[n-1] << ' ';}}

int main(){
    int n;int cpt=0;srand(time(nullptr));
    cout << "Saisir la taille du tableau : ";cin >> n;
    // ETAPE 1 (Cf sujet)
    int * T = new int[n]; int * aux = new int[n]; //Allouement des tableaux T et aux.
    for(int i = 0; i < n; i++){T[i] = rand() % k+1;} // Génère au hasard un tableau de n valeurs compris entre 0 et k.
    for(int v = 0; v < k+1; v++){
        for(int i = 0; i < n; i++){
            if (v==T[i]) cpt++;}
        aux[v] = cpt;cpt=0;}// Pour v = {0,..,k}, on a cpt occurences pour chaque indice du tableau aux.
    cout << "Tableaux T de départ non trié : "<<endl;affichage(T,n);cout << endl;
    cout << "Tableau << aux >> d'occurrences par indice v : ";affichage(aux,k+1);cout << endl;
    // ETAPE 2 - TRIER tableau en utilisant le tableau d’occurrences aux.
    int ind = 0;
    for (int v = 0; v < k+1; v++){if(aux[v]>0){for (int j = 0; j < aux[v]; j++){T[ind] = v;ind++;}}}
    cout << "Tableaux T trié selon leurs nombres d'occurences : "<<endl;affichage(T,n);cout<<endl;
    return 0;}
    //Question 1 et 2:
    //Explication de ma méthode de TRI (étape 2) :
    //On trie les éléments de T selon leurs occurrences v dans le tableau aux = {0,..,k} ssi v>0, et en fonction de l'indice de position actuelle à placer l'élément v.
    //Selon moi sa complexité vaut n*k.