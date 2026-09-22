#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    bool flag = false;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            flag=true;
            break;
        }
    }
}