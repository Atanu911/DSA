#include<iostream>
using namespace std;
int fact(int x){
    int Fact;
    for(int i=1;i<=x;i++){
        Fact *= i;
    }
    return Fact;
}
int main(){
    int n,r;
    cout<<"Enter the n & r :";
    cin>>n>>r;
    int npr = fact(n) / fact(n-r);
    cout<<npr<<endl;
}