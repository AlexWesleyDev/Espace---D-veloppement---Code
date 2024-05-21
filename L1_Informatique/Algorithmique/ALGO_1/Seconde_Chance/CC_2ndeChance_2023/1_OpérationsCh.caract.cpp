#include <iostream>
#include <string>
using namespace std;
char car_suiv(char c){
    unsigned int i = 0; string A ="abcdefghijklmnopqrstuvwxyz";
    while(A[i]!=c && i<=25){i++;}
    if(i==25) c = 'a';
    else c = A[i+1];
    return c;}
//1.
std::string ch_suiv(std::string s){
    unsigned int i = 0;bool p; string ch="";
    while(i<s.length()){
        ch = ch + car_suiv(s[i]);
        i++;}
    return ch;}
//2.
bool est_suiv(string s1,string s2){
    if(s2==ch_suiv(s1)) return true;
    else return false;}
//3.
bool est_prec(string s1,string s2){
    if(est_suiv(s2,s1)) return true;
    else return false;}
//-----------TEST
int main (){
    char c; string ch1;cout<<"Chaine svp ! : ";cin>>ch1;
    cout<<"Question 1 : "<<ch_suiv(ch1)<<endl;
    string ch2;cout<<"Chaine 2 svp ! : ";cin>>ch2;
    cout<<"Question 2 : "<<est_suiv(ch1,ch2)<<endl;
    cout<<"Chaine 3 svp ! : ";cin>>ch2;
    cout<<"Question 3 : "<<est_prec(ch1,ch2)<<endl;
    return 0;
}
    