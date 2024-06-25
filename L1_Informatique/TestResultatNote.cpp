#include<iostream>
#include<array>
#include<cmath>
using namespace std;

int main(){
    float Note1,Note2,Note3,Note4,Resultat;float Bd,Algo2,Aritm;
    cout<<"Note en BD : ";cin>>Bd;cout<<"Note en arithmétique : ";cin>>Aritm;cout<<"Note en Algo2 : ";cin>>Algo2;
    Note1 = (11*7+Algo2*8+4.84*6+14)/22;Note2=(16*4+8.5*2+13*3+Bd*4)/13;Note3=(11*5+7*5+Aritm*3)/13;Note4=(11+2*11.5+10.3+2+11.5*5)/10;
    Resultat=(Note1+Note2+Note3+Note4)/4;
    cout<<"Bloc F.I et ALGO : "<<Note1<<endl;
    cout<<"Bloc Développement : "<<Note2<<endl;
    cout<<"Bloc Mathématique : "<<Note3<<endl;
    cout<<"Bloc Transversaux : "<<Note4<<endl;
    cout<<"Le résultat pour l'année serait de "<<Resultat<<'.'<<endl;
    return 0;}