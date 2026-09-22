#include<iostream>
using namespace std;
int main(){
    int arr[]={45,33,12,66,89,99,199,344};
    // int arr[] = {5,-6,-9};
    int n = sizeof(arr)/4;
    int sum = 0;
    for(int i=0;i<=n-1;i++){
        sum +=arr[i];
      
    }
    cout<<sum;
     
}