#include<iostream>
using namespace std;
int main(){
    float x = 2.71;
    cout<<"Enter a Real No:";
    cin>>x;
    int y = (int)x;
    if(x == y)cout<< "Integer";
    else cout<<"Not an Integer";
    
}