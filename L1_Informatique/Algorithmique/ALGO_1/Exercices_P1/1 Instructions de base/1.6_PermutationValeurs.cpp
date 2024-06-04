#include <iostream>
using namespace std;
//1
int main(){
    int v1,v2,v3;cout<<"Saisir à la suite 3 entiers (v1, v2 puis v3) : ";cin>>v1>>v2>>v3;
    cout<<"Avant : V1 = "<<v1<<", V2 = "<<v2<<" et V3 = "<<v3<<endl;int v4 = v1;v1 = v2;v2=v3;v3 = v4;
    cout<<"Après permutations des valeurs : V1 = "<<v1<<", V2 = "<<v2<<" et V3 = "<<v3<<endl;
    return 0;}
//2 Version avec 4 variables
int main(){
    int v1,v2,v3,v4;cout<<"Saisir à la suite 4 entiers (v1, v2, v3 puis v4) : ";cin>>v1>>v2>>v3>>v4;
    cout<<"Avant : V1 = "<<v1<<", V2 = "<<v2<<", V3 = "<<v3<<" et V4 = "<<v4<<endl;
    int v5 = v1; v1 = v2;v2 = v3; v3 = v4; v4 = v5;
    cout<<"Après permutations des valeurs : V1 = "<<v1<<", V2 = "<<v2<<", V3 = "<<v3<<" et V4 = "<<v4<<endl;
    return 0;}