#include<iostream>
using namespace std;
int main() {
    int x,y,z;
    cout<<"Enter first integer:";
    cin>>x;
    cout<<"Enter second integer:";
    cin>>y;
    cout<<"Enter third integer:";
    cin>>z;
    if(x <= y && x <=z ) cout<<x<<"is the least integer";
    else if(y <= x && y <=z) cout<< y<<" is the least integer";
    else cout<< z<<" is the least integer";
}