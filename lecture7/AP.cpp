#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms:";
    cin>>n;
    // for(int i=2;i<=3*n-1;i+=3){
    //     cout<<i<<" ";

    // }
    // int a =2 ,d =3;
    // for(int i=1;i<=n;i++){
    //     cout<<a<<" ";
    //     a += 3; 
    // }
    int a =3,d=4;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a += d;
    }
}