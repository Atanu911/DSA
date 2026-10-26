#include<iostream>
using namespace std;
int fact(int n){
    if(n == 0 || n==1) return 1;
    int ans = n*fact(n-1);
    return ans;
}
int main(){
    cout<<"Enter the number of calculating factorial :";
    int n;
    cin>>n;
    cout<<fact(n);
}