#include <iostream>
#include <array>
#include <fstream>
using namespace std;
using tab_int = std::array<int,6>;
//1.
struct t_main {
    std::string nom;
    std::array <int,12> tabh;
    int nbc;
};
//2.
int maxmain(t_main M){
    int ind = 0;
    for(int i = 1; i < M.nbc; i++){
        if(M.tabh[ind] < M.tabh[i]) ind=i;}
    return M.tabh[ind];}
//3.
struct t_tour {
    int nbm;
    std::array <t_main,6> tabm;
};
//4.
void charger_tour(std::string f,t_tour &t){
    std::ifstream fic;
    fic.open(f);
    fic>>t.nbm;
    for(int i = 0;i<t.nbm;i++){
        fic>>t.tabm[i].nom;
        fic>>t.tabm[i].nbc;
        for(int j = 0; j < t.tabm[i].nbc; j++){fic>>t.tabm[i].tabh[j];}}}

//5.
std::string gagnant(t_tour t){
    int ind = 0; int cpt=0;
    for(int i = 1;i<t.nbm;i++){
        if(maxmain(t.tabm[i]) > maxmain(t.tabm[ind])) ind=i;}
    for(int j = 0; j < t.nbm; j++){
        if(maxmain(t.tabm[j])==maxmain(t.tabm[ind])) cpt++;}
    if(cpt>1) return "Pas de gagnant car exaequo !";
    else return t.tabm[ind].nom;}
    
//6.
/* FONCTIONS AFFICHAGE POUR TEST */
void afficheMain(t_main M){
    cout<<M.nom<<' '<<M.nbc<<" carte(s) = ";
    for(int i = 0; i < M.nbc; i++){
        if(i==M.nbc-1) cout<<M.tabh[i]<<endl;
        else cout<<M.tabh[i]<<" , ";}}
void afficheTour(t_tour t){
    cout<<"Nombre de mains : "<<t.nbm;
    cout<<"\nListe des mains : "<<endl;
    for(int i = 0; i < t.nbm; i++){
        afficheMain(t.tabm[i]);}}
/* FONCTIONS AFFICHAGE POUR TEST */
int main (){
    t_main M;t_tour t;std::string f ="tour1.txt";
    charger_tour(f,t); afficheTour(t);
    cout<<gagnant(t)<<endl;
    return 0;}
