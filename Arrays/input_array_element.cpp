#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter"<<n<<"element : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"All array elements are : ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}