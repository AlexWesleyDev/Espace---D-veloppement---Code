#include <iostream>
using namespace std;

int main (){
    float x,v;cout<<"Saisir une valeur x : ";cin>>x;v=x;
    if(x!=0){
        if(x<0) v=-x;
        float y = (3*x*x + v)/((2*x*x)/3)-6;
        cout<<"f("<<x<<") par la fonction f vaut "<<y<<endl;}
    return 0;}