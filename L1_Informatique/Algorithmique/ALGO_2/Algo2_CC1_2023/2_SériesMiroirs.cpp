# include <iostream>
# include <array>

using namespace std;
using tab_int = std::array <int,5>;
// code de " miroirs "
bool miroirs(tab_int t1, tab_int t2,int n){
     if(n==-1) return true;
    else{
        int i= 5-(n+1);
        if(t2[n]==t1[i]) return miroirs(t1,t2,n-1);
        else return false;}}

void affiche(tab_int T,int n){
    for(int i = 0; i < n; i++){
        if(i==n-1) cout<<T[i]<<endl;
        else cout<<T[i]<<" , ";}}

int main (){
    tab_int t1 = {3,8,12,0,7},t2 = {7,0,12,8,3};
    affiche(t1,5);affiche(t2,5);
    cout<<"t1 et t2 miroirs ? "<< miroirs(t1,t2,4);
    t2[2] = -31;
    cout<<"\nt1 et t2 miroirs ? "<< miroirs(t1,t2,4);
    return 0;}