#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    bool espace=false;string ch,s;ifstream fic;cout<<"Fichier : ";cin>>ch;fic.open(ch);
    int note,notemax=0;string nomMax,nom;
    if(fic.is_open()){
        fic>>nom;
        while(fic.good()){
            for(int i=0;i<nom.length();i++){
                if(nom[i]==' '){espace=true;for(int k=i+1;k<nom.length();k++){s+=nom[k];}note=stoi(s);s="";}}
            if(espace==true){
                if(note>notemax){notemax=note;nomMax=nom;}fic>>nom;}
            else{fic>>note;if(note>notemax){notemax=note;nomMax=nom;}fic>>nom;}}}
    cout<<"Le major de promotion est "<<nomMax<<" avec une note de "<<notemax<<"."<<endl;
    return 0;}  