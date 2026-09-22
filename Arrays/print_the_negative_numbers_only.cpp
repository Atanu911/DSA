#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element : ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        if(arr[i]<0)
        cout<<arr[i]<<" ";
    }

}