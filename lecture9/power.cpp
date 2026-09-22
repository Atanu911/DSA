#include<iostream>
using namespace std;
int main (){
    int a;
    cout<<"Enter exponent:";
    cin>>a;
    int b;
    cout<<"Enter base:";
    cin>>b;
    int ans = 1;
    for(int i = 1;i<=b;i++){
        ans *=a;
        if(a==1) break;
        ans *=a;
    }
    if(a==0 && b==0) cout<<"indeterminate Form";
    cout<<ans;
}