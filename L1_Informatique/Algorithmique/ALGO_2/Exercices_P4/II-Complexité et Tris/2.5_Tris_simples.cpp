#include <iostream>
#include <array>

using namespace std;
void affichage(int*T,int n){
    if(n>0){
        affichage(T,n-1);
        cout << T[n-1] << ' ';}}
//1.
int indice_max(int *T,int n){
    int max = 0;
    for (int i = 1; i < n; i++){if(T[i]>T[max]) max = i;}
    return max;}
//2.
void echange(int*T,int x, int y){int v = T[x];T[x] = T[y];T[y] = v;}

void tri_selection(int* T,int n){
    int max = indice_max(T,n);int k=n;
    while(n>0){
        echange(T,max,n-1);
        n--;
        max = indice_max(T,n);}
    n=k;affichage(T,n);cout<<endl;}
//3.
void insere(int * &T,int &N,int X){
    int i = 0; int n=N;N++;
    while(i != -1){
        if(T[i]>X){
            while(T[n-1]>X){
                echange(T,n-1,n); //On échange le dernier élément d'indice n-1 à T[n] qui vaut un nombre par défaut.
                n--;}
            T[n]= X;i=-1;}
        else i++;}}
//4.
void tri_insertion(int*T,int n){
    int len = 2;int max = indice_max(T,len);
    if(max==0) echange(T,0,1);
    for (int i = 2; i < n; i++){
        insere(T,len,T[i]);}
    affichage(T,n);cout<<endl;}

int main(){
    int k;//test
    int n,X;cout<<"Saisir un entier : ";cin>>n;k=n;
    int * T = new int[n];srand(time(nullptr));
    for(int i = 0; i < n; i++){T[i] = rand() % n+1;}
    cout << "T = ";affichage(T,n);cout <<endl;
    cout << "Maximun : " << T[indice_max(T,n)]<<" d'indice "<<indice_max(T,n)<<endl;//1.
    cout<<"T trié par selection : ";tri_selection(T,n);//2.
    cout<<"Valeur à insérer : ";cin>>X;insere(T,n,X);affichage(T,n);cout<<endl;//3.
    cout<<"T trié par insertion : ";tri_insertion(T,n);//4.
    return 0;}