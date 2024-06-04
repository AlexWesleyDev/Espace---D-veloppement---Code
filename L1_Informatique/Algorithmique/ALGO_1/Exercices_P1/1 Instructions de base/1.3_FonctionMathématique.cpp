#include <iostream>
using namespace std;

int main (){
    float x;cout<<"Saisir une valeur x : ";cin>>x;
    cout<<"f("<<x<<") par la fonction f vaut "<<(x*x-(3*x)+0.5)*(x-3)<<endl;
    return 0;}