#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;
    //First row (2n-1 stars)
    for(int i=1;i<=2*n-1;i++){
        cout<<"* ";
    }
    cout<<endl;
    // 1 loop mein 3 loop
    n--;
    for(int i=1;i<=n-1;i++){
         for(int j=1;j<=n+1-i;j++){
            cout<<"* ";
         }
         for(int j=1;j<=2*i-1;j++){
            cout<<"  ";
         }
         for(int j=1;j<=n+1-i;j++){
            cout<<"* ";
         }
         cout<<endl;
    }
}