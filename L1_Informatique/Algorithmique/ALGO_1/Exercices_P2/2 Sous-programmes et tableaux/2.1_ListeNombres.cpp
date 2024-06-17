#include<iostream>
#include<array>
using namespace std;
const int taillemax = 1000;
using liste = array<float,taillemax>;
//1
void saisie(float &n,liste &L){
    cout<<"Nombre de réels : ";cin>>n;
    cout<<"Saisir successivement "<<n<<" réels : ";
    for(int i=0;i<n;i++) cin>>L[i];}
//2
void affichage(float n,liste L){for(int i=0;i<n;i++){cout<<L[i]<<';';}cout<<endl;}
//3
bool triCroissant(float n,liste L){
    int i =0;
    for (int j = 1; j < n; j++){
        if(L[j]>L[i]) i=j;
        else return false;}
    return true;}
//4
float valeurAbs(float v){
    if(v>0) return v;
    else return -v;}

float PlusGrandEcart(float n,liste l){
    float ecartmax = valeurAbs(l[0]-l[1]);
    for(int i=1;i<n-1;i++){
        if(valeurAbs(l[i]-l[i+1])>ecartmax) ecartmax=valeurAbs(l[i]-l[i+1]);}
    return ecartmax;}
//5

int main(){
    liste L;float n;saisie(n,L);affichage(n,L);
    if(triCroissant(n,L)){
        cout<<"Liste triée par ordre croissant !"<<endl;
        cout<<"Le plus grand écart séparant deux valeurs consécutives est "<<PlusGrandEcart(n,L)<<endl;}
    else cout<<"Liste non triée par ordre croissant !"<<endl;
    return 0;}