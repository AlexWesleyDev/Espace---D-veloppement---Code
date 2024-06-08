#include <iostream>
using namespace std;

int main(){
    for(int n=100;n<1000;n++){
        if(n/100+(n%100)/10+(n%100)%10==9) cout<<n<<' ';}
    cout<<endl;
    return 0;}
// Exercicee 3.8 Maximum est facultatif