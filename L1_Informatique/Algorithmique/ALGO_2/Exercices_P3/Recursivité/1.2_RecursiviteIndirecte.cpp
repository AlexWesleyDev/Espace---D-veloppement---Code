#include <iostream>
using namespace std;

bool Pair(int n){
    if(n==2) return true;
    else{
        if(n>0) return Pair(n-2);
        else return false;}}

bool impair(int n){
    if(n==1) return true;
    else{
        if(n>0) return impair(n-2);
        else return false;}}

int main(){
    int n;cout<<"Nombre : ";cin>>n;
    cout<<"Pair : "<<Pair(n)<<endl;
    cout<<"Impair : "<<impair(n)<<endl;
    return 0;}