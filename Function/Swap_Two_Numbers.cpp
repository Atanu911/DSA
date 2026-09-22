#include<iostream>
using namespace std;
int main(){
    
    int a = 7,  b = 8;
    cout<<a<<" "<<b<<endl;
     //another method
     a = (a+b) -(b = a);

    a = a + b;
    b = a - b;
    a = a - b;

    // int temp = a;
    // a = b;
    // b = temp;
    cout<<a<<" "<<b;
} 