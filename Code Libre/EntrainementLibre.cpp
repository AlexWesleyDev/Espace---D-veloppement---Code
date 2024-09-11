#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    int cpt=0;string l;ifstream fic;
    while(cpt<3){
        fic.open("texte.txt");
        if(fic.is_open()){
            getline(fic,l);
            while(fic.good()){cout<<l<<endl;getline(fic,l);}}
            fic.close();cpt+=1;cout<<"Etape "<<cpt<<endl;}
    return 0;}