#include<iostream>
using namespace std;
int main(){
    int arr[][5] = {
        {6,0,9,2,3},
        {5,2,6,0,9},
        {8,4,8,1,7},
        {8,4,8,1,7}
    };
    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);
    for(int i = 0 ;i<row;i++){
        if(i%2 != 0){
            for(int j=col-1;j>=0;j--)
            cout<<arr[i][j]<<" ";
        }
    
    else{
        for(int j = 0;j<col;j++)
        cout<<arr[i][j]<<" ";
    }
    
    }

}