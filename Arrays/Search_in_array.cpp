#include<iostream>
using namespace std;
int main() {
    int m;
    cout<<"Enter the element we have to search :";
    cin>>m;
    int arr[] ={1,3,4,5,6,7,7,9,10} ;
    int n = sizeof(arr)/4;
    bool flag = false; //false means not present...
    for(int i = 0; i<=n-1;i++){
        if(arr[i] == m) {
            flag = true;//true means present...
            break;
        }
    }
    if(flag == true) cout<<"Element Found"<<endl;
    else cout<<"Element Not Found"<<endl;
}