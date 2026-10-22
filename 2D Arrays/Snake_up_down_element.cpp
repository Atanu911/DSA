#include<iostream>
using namespace std;
int main(){
    int arr[][4] = {
        {5,6,7,8},
        {3,4,5,8},
        {90,56,45,6},
        {32,43,23,4}
    };
     int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr[0])/sizeof(arr[0][0]);
    for(int j = 0;j<n;j++){
        if(j%2 == 0){
        for(int i = 0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        }
        else{
            for(int i =m-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
            }
        }
    }

}