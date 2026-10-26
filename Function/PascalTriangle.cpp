#include<iostream>
using namespace std;
int Fact(int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
        fact *= i;
    }
    return fact;
}
int ncr(int n , int r){
    return Fact(n) / (Fact(r)*Fact(n-r));
}

int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;
    for(int i=0;i<=n;i++){         //Remember this to start from i=0;
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        
       
        for(int j=0;j<=i;j++){
            cout<< ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}