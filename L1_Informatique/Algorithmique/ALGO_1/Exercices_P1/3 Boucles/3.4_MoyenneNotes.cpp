#include <iostream>
using namespace std;
//1 et 2
int main(){
    float note,cpt,s,M,min,max;s=0;cpt=0;cout<<"Saisir une suite de notes : ";cin>>note;
    max = note;min = note;
    while(note!=-1){
        if(0<=note && note<=20){
            s = s+note;cpt++;cout<<note<<' ';
            if(note>max) max = note;
            else if(note<min) min = note;}
        cin>>note;}
    M = s/cpt;cout<<"Moyenne des notes : "<<M<<endl;
    cout<<"Note minimale : "<<min<<endl;cout<<"Note maximale : "<<max<<endl;
    return 0;}
