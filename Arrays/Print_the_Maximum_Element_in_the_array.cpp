#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/4 ;
    int mx = 0;
    for(int i=0;i<=n-1;i++){
        // if(arr[i] >mx) mx = arr[i];
        mx = max(arr[i],mx);
    }
    cout<<mx;
    //Method no second...
    int mx = INT_MIN;
    for(int i = 0;i<=n-1;i++){
        if(arr[i] >max) mx = arr[i];
    }
    //Method no third...
    int mx = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i] >max) mx = arr[i];
    }
    cout<<mx;
}