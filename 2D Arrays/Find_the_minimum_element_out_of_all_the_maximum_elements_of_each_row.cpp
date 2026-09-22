#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[][4] ={{4,5,6,7,},{3,5,6,23},{76,2,57,2}};
    int ans =INT_MAX;
    for(int i =0;i<3;i++){
        int rowMax =INT_MIN;
        for(int j =0;j<4;j++){
            if(arr[i][j]>rowMax){
                rowMax = arr[i][j];
            }
        }
        if(rowMax<ans){
            ans = rowMax;
        }
        
    }
    cout<<"The minimum element out of all the maximum elements of each row is "<< ans;
}