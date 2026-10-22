#include<iostream>
using namespace std;
int main() {
    int x,y,z;
    cout<<"Enter first side:";
    cin>>x;
    cout<<"Second side:";
    cin>>y;
    cout<<"Third side:";
    cin>>z;
    if(x+y > z && y+z >x  && z+x > y) cout<<" These are three sides of a Triangle";
    else cout<<"Not triangle sides";

}