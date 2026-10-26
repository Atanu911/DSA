#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr [][4]= {
        {5,6,2,12},
        {6,2,6,7},
        {7,6,9,2},
    };
    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);
    int ans = INT_MIN;
    for(int j = 0;j<col;j++){
        int colmin = INT_MAX;
        for(int i = 0;i<row;i++){
            if(arr[i][j]<colmin){
                colmin =arr[i][j];
            }
        }
        if(ans<colmin){
            ans = colmin;
            
        }
    }
    cout<<"The maximum element of the minimum of all column element is "<<ans;

}