#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,7,9,10};
    int n = sizeof(arr)/4;
    int mx = arr[0];
    for(int i= 0;i<=n-1;i++){
        mx = max(mx,arr[i]);
    }
    int smax = arr[0];
    for(int i=0;i<=n-1;i++ ){
         if(arr[i]> smax && arr[i]<mx) smax =arr[i];
    }
    cout<<smax<<" "<<mx;
}