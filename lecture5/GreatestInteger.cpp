#include<iostream>
using namespace std;
int main() {
    int x,y,z;
    cout<<"enter first number:";
    cin>>x;
    cout<<"Enter second number:";
    cin>>y;
    cout<<"Enter third number:";
    cin>>z;
    if(x>=y && x>z) cout<<x<<" is greatest number";
    else if(y>x && y>z) cout<<y<<"is greatest number";
    else cout << z <<" is the largest number";
}