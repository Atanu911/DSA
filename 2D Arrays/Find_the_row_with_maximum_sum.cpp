#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int main(){
    int arr[][4]={{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    int maxrow = -1, maxSum = INT_MIN;
    for(int i = 0;i<3;i++){
        int sum = 0;
        for(int j= 0;j<4;j++){
            sum +=arr[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
            maxrow = i;
        }
    }
    cout<<"Maxrow is "<<maxrow<< " and Maxsum is  "<<maxSum;
}