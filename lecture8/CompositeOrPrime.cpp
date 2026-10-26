#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    bool flag = false;// That means prime number;
    for(int i = 2; i<=n-1; i++){
        if(n%i == 0){
            flag = true;
            break;
        }
    }
    
    if(flag == true){
        cout<<"composite number";
    } else {
        cout<<"Prime number";
    }
} 