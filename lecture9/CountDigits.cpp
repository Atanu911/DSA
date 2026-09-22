#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the quantity number:";
    cin>>n;
    int count = 0;
    if(n==0) count++;//check if first number is zero;
    while(n != 0){//!= it is another check because of the negative numbers;
        n/=10;
        count++;
    }
    cout<<count<<" ";
}