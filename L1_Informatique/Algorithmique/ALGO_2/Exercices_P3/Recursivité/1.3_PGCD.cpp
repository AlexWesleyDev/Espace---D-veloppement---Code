#include <iostream>
using namespace std;

int pgcd(int a,int b){
  if(b==0) return a;
  else return pgcd(b,a%b);}

int main(){
  int a,b;
  cout<<"Saisir a : ";cin>>a;
  cout<<"Saisir b : ";cin>>b;
  cout<<"Le PGCD de "<<a<<" et "<< b<<" est "<<pgcd(a,b)<<endl;
  return 0;}