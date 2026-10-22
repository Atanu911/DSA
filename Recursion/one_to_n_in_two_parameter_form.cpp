#include<iostream>
using namespace std;
void printSum(int x,int n){
    if(x>n)return;//base case...
    cout<<x<<endl;//work...
    printSum(x+1,n);//call...
}
int main(){
 cout<<"Enter the integer: ";
 int n;
 cin>>n;
 printSum(1,n);
}