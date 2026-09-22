#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,6,7,8,9,0};
    int n = sizeof(arr)/4;
    int min = arr[0];
    for(int i = 0;i<=n-1;i++){
        if(arr[i]<min) min =arr[i];

    }
    cout<<min;
}