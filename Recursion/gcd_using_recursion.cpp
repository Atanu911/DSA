#include<iostream>
using namespace std;
int hcf(int a, int b){
    if(b%a == 0)return b;
    int gcd = hcf(b%a,a);
    return gcd;
}
int main(){
    cout<<"Enter the two integer :";
    int a,b;
    cin>>a>>b;
    cout<<hcf(a,b);
}