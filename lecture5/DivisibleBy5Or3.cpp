#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter a number:";
 cin>>n;
 
if(n%5 == 0 && n%3 ==0) cout<<"Number is divisible by 5 and 3";
else if(n%5 == 0) cout<<"Entered number is divisible by 5";
else if(n%3 == 0) cout<<"Entered number is divisible by 3";
else cout<<"Number is not divisible by 3 and as well as 5";

}
