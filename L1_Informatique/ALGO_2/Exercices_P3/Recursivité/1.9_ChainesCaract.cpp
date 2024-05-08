#include <iostream>
using namespace std;
//1.
string Extraire(string ch,int ind,int l){
    if(ind>-1 && ind<=ch.length()){
        if(l==0) return "";
        else{
            if(l>0){
                string s = Extraire(ch,ind+1,l-1);s=ch[ind]+s;
                return s;}}
    }
}

int main(){
    string ch;cout<<"Chaine : ";cin>>ch;
    cout<<Extraire(ch,3,4)<<endl;
    return 0;
}