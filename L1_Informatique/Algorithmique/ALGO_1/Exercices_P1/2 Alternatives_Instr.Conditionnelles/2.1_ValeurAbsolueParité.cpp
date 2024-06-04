#include <iostream>
using namespace std;

int main (){
    int n;cout<<"Entrez un entier n : ";cin>>n;
    if(n<0) n=-n;cout<<"Valeur absolue de n : "<<n<<endl;
    if(n%2==0) cout<<"La valeur absolue est pair"<<endl;
    else cout<<"La valeur absolue est impair"<<endl;
    return 0;}
