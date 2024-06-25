#include<iostream>
#include<string>
#include<fstream>
using namespace std;
//1 Créer trois fichiers : fic1.txt et fic2.txt sont copies et fic3.txt != de fic1.
// touch fic1.txt;cp fic1.txt fic2.txt;touch fic3.txt
//2
string testIdentite(string ch1,string ch2){
    string l1,l2;ifstream fic1;ifstream fic2;
    fic1.open(ch1);fic2.open(ch2);
    if(fic1.is_open() && fic2.is_open()){
        getline(fic1,l1);getline(fic2,l2);
        while(fic1.good() && fic2.good()){
            if(l1==l2){getline(fic1,l1);getline(fic2,l2);}
            else return "Non.";}
        return "Oui.";}
    else return "Non applicable.";}

int main(){
    string ch1,ch2;cout<<"ch1 et ch2 : ";cin>>ch1>>ch2;
    cout<<testIdentite(ch1,ch2)<<endl;
    return 0;}
// NON FINI