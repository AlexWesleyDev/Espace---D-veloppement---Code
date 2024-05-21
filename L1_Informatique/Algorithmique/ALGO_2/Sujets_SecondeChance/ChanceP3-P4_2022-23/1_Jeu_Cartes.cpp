#include <iostream>
#include <string>
#include <array>
#include <fstream>
using namespace std;
//1.
struct t_main {
    int nbc ;
    std :: string nom ;
    int * tabh ;
};

struct t_tour {
    int nbm ;
    t_main * tabm;
};
//2.
void charger_tour(t_tour &t,std::string nom_fic){
    std::ifstream fic(nom_fic);
    fic>>t.nbm;
    t.tabm = new t_main[t.nbm];
    for (int i = 0; i < t.nbm; i++){
        fic>>t.tabm[i].nom;fic>>t.tabm[i].nbc; //a.
        int n = t.tabm[i].nbc;t.tabm[i].tabh = new int[n]; // b.
        for(int j = 0;j<t.tabm[i].nbc;j++){ //c.
            fic>>t.tabm[i].tabh[j];}}}
//3.
void aff_main(t_main M){
    cout<<M.nom <<" a "<<M.nbc<<" carte(s) en main : ";
    for(int i = 0; i < M.nbc; i++){
        cout<<M.tabh[i] << ' ';}}
////////// Facultatif//////////////////
int main (){
    std::string nom_fic = "texte.txt"; t_tour t;
    charger_tour(t,nom_fic);
    cout<<"Dans la variable t de type t_tour, on a : "<<endl;
    cout<< "- "<<t.nbm<<" joueurs."<<endl;
    cout<<"- "<<"Tableau dynamique contenant les joueurs de type t_main : "<<endl;
    for (int i = 0; i < t.nbm; i++){
        cout<<"   ";aff_main(t.tabm[i]);cout<<endl;}
    return 0;
}
