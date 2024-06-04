#include <iostream>
using namespace std;
//1
int main(){
    float a,m,i;
    cout<<"Note en anglais (coeff.2) : ";cin>>a;
    cout<<"Note en mathématiques (coeff.5) : ";cin>>m;
    cout<<"Note en informatique (coeff.3) : ";cin>>i;
    float M = (2*a + 5*m + 3*i)/10;cout<<"Moyenne obtenue : "<<M<<endl;
    return 0;}
//2 Version avec des coeff comme constantes
int main(){
    const int A = 2;const int M = 5;const int I = 3;float a,m,i;
    cout<<"Note en anglais (coeff.2) : ";cin>>a;
    cout<<"Note en mathématiques (coeff.5) : ";cin>>m;
    cout<<"Note en informatique (coeff.3) : ";cin>>i;
    float Moy = (A*a + M*m + I*i)/10;cout<<"Moyenne obtenue : "<<Moy<<endl;
    return 0;}