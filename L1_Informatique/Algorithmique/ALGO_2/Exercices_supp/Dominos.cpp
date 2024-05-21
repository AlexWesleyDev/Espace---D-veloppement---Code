#include <iostream>
#include <ctime>
#include <cstdlib>
//1.2.
struct domino {
  int p1;
  int p2;
};

struct maillon {
  domino val;
  maillon* suiv;
};
//2.
using liste = maillon*; using namespace std;
//3.
void saisieDom(domino& d){cout << "Saisir les points du domino : ";cin >> d.p1 >> d.p2;}
//4.
void initListe(liste& m){m = nullptr;}
//5.
void ajouteDebut(domino d, liste& m){liste p = new maillon;p->val = d;p->suiv = m;
  m = p;}
//6.
void ajouteFin(domino d, liste& m){if(m == nullptr) ajouteDebut(d,m);else ajouteFin(d,m->suiv);}
//7.
void saisieListe(liste& m,int n){
  if(n>0){
    m = new maillon;
    saisieDom(m->val);
    saisieListe(m->suiv,n-1);}}
//8.
void afficheDom(domino d){cout<<' '<<d.p1<<':'<< d.p2;}
//9.
void afficheMain(liste m){
  if(m != nullptr){
    afficheDom(m->val);
    if(m->suiv!=nullptr) cout<<" -";
    afficheMain(m->suiv);}
  else cout<<endl;}
//10.
void supprimePremier(liste& m){if(m != nullptr){liste p = m;m = m->suiv;delete p;}}
//11.
int nbDom(liste m){
  if(m== nullptr) return 0;
  else return 1+nbDom(m->suiv);}
//12.
void initPioche(liste &pioche){//Initialisation d'une pioche du jeu à double 6 pour les dominos. 
  liste p;p=nullptr;domino d;
  for (int i = 0; i < 7; i++){
    for (int j = i; j < 7; j++){
      d.p1 = i;d.p2 = j;
      ajouteFin(d,p);}}
  pioche = p;}
//13.
void suppr_nieme(liste &p,int a,int b){
  if(p!=nullptr){
    if(p->val.p1==a && p->val.p2==b) supprimePremier(p);
    else suppr_nieme(p->suiv,a,b);}}
//14.
void piocher(liste &P,liste &m){
  if(P!=nullptr){
    srand(time(nullptr)); int pos = 1+rand()% nbDom(P);liste Pioche = P;
    if(pos==1){ajouteFin(P->val,m);suppr_nieme(Pioche,P->val.p1,P->val.p2);}
    else{
      for(int i = 2; i <= pos; i++) P = P->suiv;
      ajouteFin(P->val,m);suppr_nieme(Pioche,P->val.p1,P->val.p2);}
    P=Pioche;}
  else P = nullptr;}

//15.
void genere_main(liste &m,int n,liste &P){
  if(P!=nullptr){
    if(n>0){
      for(int i = 0; i < n; i++) piocher(P,m);}
    else m = nullptr;}}
//16.
int nbPoint(liste m){return 2*nbDom(m);}
//17.
void retourner(domino &d){int x = d.p1; d.p1 = d.p2;d.p2 = x;}
//18.
int aGauche(liste jeu){
  if(jeu!=nullptr) return jeu->val.p1;
  else return -1;}

int aDroite(liste jeu){
  if(jeu!=nullptr){
    if(jeu->suiv==nullptr) return jeu->val.p2;
    else return aDroite(jeu->suiv);}
  else return -1;}
//19.
void jouer(liste & m, liste & j, bool & bloque){
  if(m!=nullptr){
    if(m->val.p1 == aDroite(j)){
      ajouteFin(m->val,j);
      suppr_nieme(m,m->val.p1,m->val.p2);
      bloque = false;}
    else{
      if(m->val.p2 == aGauche(j)){
        ajouteDebut(m->val,j);
        suppr_nieme(m,m->val.p1,m->val.p2);
        bloque = false;}
      else jouer(m->suiv,j,bloque);}}
  else bloque=true;}

int main(){
  //-------------------------------------Avec un seul joueur--------------------------------
  int n;bool block=false;//b=false par défaut signifie que le jeu est ouvert.
  liste jeu,Main,pioche;initListe(Main);initPioche(pioche);initListe(jeu);
  genere_main(jeu,1,pioche);
  cout<<"Nombre de dominos à piocher : ";cin>>n;
  genere_main(Main,n,pioche);cout<<"Main de départ avec "<<n<<" domino(s) = ";afficheMain(Main);
  cout<<"Pioche de départ = ";afficheMain(pioche);cout<<"On a "<< nbDom(pioche)<<" dominos dans la pioche."<<endl;
  cout<<"Jeu actuel = ";afficheMain(jeu);
    /// TEST facultatif
  cout<<"Début : "<< aGauche(jeu)<<endl;
  cout<<"Fin : "<< aDroite(jeu) <<endl;
    /// FIN TEST facultatif

  while(Main!=nullptr && not(block) && pioche!=nullptr){
    jouer(Main,jeu,block);
    while((block) && pioche!=nullptr){
      piocher(pioche,Main);
      jouer(Main,jeu,block);}}

  /// TEST facultatif
  cout<<"Pioche après jeu = ";afficheMain(pioche);cout<<"Avec "<< nbDom(pioche)<<" dominos dans la pioche."<<endl;
  cout<<"Jeu actuel = ";afficheMain(jeu);
  cout<<"Main après jeu = ";afficheMain(Main);cout<<"Avec "<<nbDom(Main)<<" domino(s) dans la main."<<endl;
  /// FIN TEST facultatif

  if(Main!=nullptr && (block) && pioche==nullptr) cout<<"Nombre de points restants en main : "<<nbPoint(Main);
  else if(Main==nullptr)cout<<"On a gagné !";

  ///// 21. Modifier le programme afin de faire jouer 1 puis 2 joueurs au jeu de dominos ---> A SUIVRE ....(Bonus)

  return 0;
}