#include <iostream>
using namespace std;
/*/ 1
int main(){
    int annee;cout<<"Saisir une année : ";cin>>annee;
    if(annee%100!=0){
        if(annee%4==0) cout<<"Année bissextile."<<endl;
        else cout<<"Année non bissextile."<<endl;}
    else{
        if(annee%400==0) cout<<"Année bissextile."<<endl;
        else cout<<"Année non bissextile."<<endl;}
    return 0;}*/
    
// 2
bool bissextile(int annee){
    if(annee%100!=0){
        if(annee%4==0) return true;
        else return false;}
    else{
        if(annee%400==0) return true;
        else return false;}}

int main(){
    int j1,m1,annee1,j2,m2,annee2,diffAnnee;
    cout<<"Date 1 : ";cin>>j1>>m1>>annee1;
    cout<<"Date 2 : ";cin>>j2>>m2>>annee2;
    if((1<=j1<=31 && 1<=j2<=31) and (1<=m1<=12 && 1<=m2<=12)){
        if((m1==2 or m2==2) and (j1<29 or j2<29) and (not(bissextile(annee1)) or not(bissextile(annee2)))){
            diffAnnee = annee1 - annee2; if(diffAnnee<0) diffAnnee = -diffAnnee;
            if(m1!=m2) diffAnnee-=1;
            cout<<"Années séparant ces deux dates : "<<diffAnnee<<endl;}
        else{
            if((m1==2 or m2==2) and (j1<30 or j2<30) and (bissextile(annee1)) or bissextile(annee2)){
                diffAnnee = annee1 - annee2; if(diffAnnee<0) diffAnnee = -diffAnnee;
                if(m1!=m2) diffAnnee-=1;
                cout<<"Années séparant ces deux dates : "<<diffAnnee<<endl;}
            else{
                diffAnnee = annee1 - annee2; if(diffAnnee<0) diffAnnee = -diffAnnee;
                if(m1!=m2) diffAnnee-=1;
                cout<<"Années séparant ces deux dates : "<<diffAnnee<<endl;}}}           
    return 0;}