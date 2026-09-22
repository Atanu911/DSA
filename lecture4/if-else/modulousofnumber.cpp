#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number:";
    cin>>n;
    // if(n < 0) cout<<-n;
    // else cout<<n;
    if(n < 0) n *= -1;
    cout<<n;

}