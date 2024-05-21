#include <iostream>
using namespace std;
//1.
string Extraire(string ch,int ind,int l){
    if(ind>-1 && ind<=ch.length()){
        if(l>0){
            string s = Extraire(ch,ind+1,l-1);
            s=ch[ind]+s;
            return s;}
        else return "";}
    else return "";}
//2.
bool palindrome(string ch){
    if(ch =="" or ch.length()==1) return true;
    else{
        if(ch[0]==ch[ch.length()-1]) return palindrome(Extraire(ch,1,ch.length()-2));
        else return false;}}
//3.
int nbreOc(string ch,char c){
    if(ch=="") return 0;
    else{
        if(ch[0]==c) return 1+nbreOc(Extraire(ch,1,ch.length()-1),c);
        else return nbreOc(Extraire(ch,1,ch.length()-1),c);}}

int main(){return 0;}