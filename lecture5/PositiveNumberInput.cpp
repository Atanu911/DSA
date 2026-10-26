#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter your Number:";
    cin>>x;
    
  
     if(x % 3 and x%5 == 0) cout<<"Number is divisible by both 5 & 3";
    else if(x % 5 == 0) cout<<"Number is divisible by 5";
    else if(x % 3 == 0) cout<<"Number is divisible by 3";
    else cout<<"Number is not divisible by 5 or 3";
}