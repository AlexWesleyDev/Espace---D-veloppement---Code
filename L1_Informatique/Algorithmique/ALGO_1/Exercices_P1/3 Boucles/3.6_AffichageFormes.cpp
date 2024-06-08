#include <iostream>
using namespace std;

int main(){
    int l;cout<<"Longueur : ";cin>>l;
    // CARRE PLEIN
    cout<<"Carré plein : "<<endl;
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){cout<<'*';}
        cout<<endl;}
    // CARRE VIDE
    cout<<"Carrévide : "<<endl;
    for(int i=0;i<l;i++){
        if(i==0 or i==l-1){for(int j=0;j<l;j++){cout<<'*';}cout<<endl;}
        else{cout<<'*';for(int j=1;j<l-1;j++){cout<<' ';}cout<<'*';cout<<endl;}}
    // DAMIER
    cout<<"Damier : "<<endl;
    for(int i=1;i<l+1;i++){
       if(i%2==0){
        for(int j=1;j<l+1;j++){if(j%2==0) cout<<" *";}
        cout<<endl;}
        else{
            for(int j=1;j<l+1;j++){if(j%2!=0) cout<<"* ";}
            cout<<endl;}}
    // TRIANGLE RECTANGLE ISOCELE 
    cout<<"Triangle rectangle isocèle : "<<endl;
    cout<<"1°"<<endl;
    for(int i = 1;i<l+1;i++){
        for(int j=0;j<i;j++){cout<<'*';}cout<<endl;}
    cout<<"2°"<<endl;
    for(int i = l;i>0;i--){
        for(int j=0;j<i;j++){cout<<'*';}cout<<endl;}    
    cout<<"3°"<<endl;
   for(int i=l;i>0;i--){
        for(int k=0;k<l-i;k++){cout<<' ';}
        for(int j=0;j<i;j++){cout<<'*';}
        cout<<endl;}
    cout<<"4°"<<endl;
    for(int i=1;i<l+1;i++){
        for(int k=0;k<l-i;k++){cout<<' ';}
        for(int j=0;j<i;j++){cout<<'*';}
        cout<<endl;}
    return 0;}