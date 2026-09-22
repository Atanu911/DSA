#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter cost price:";
    cin>>cp;
    int sp;
    cout<<"Enter selling price:";
    cin>>sp;
    // if(sp>cp) cout<<"Profit";
    // if(cp>sp) cout<<"Loss";
    // if(sp==cp) cout<<"No Profit, No Loss";
     if(sp>cp) cout<<"Profit"<<endl<<"Profit is:"<<sp-cp;
     else if(cp>sp) cout<<"Loss"<<"Loss is:"<<cp-sp;
     else cout<<"No Profit No Loss";

}