#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;
void printRec(vector<int>&arr,int idx){
    if(idx==arr.size())return;
    cout<<arr[idx]<<" ";
    printRec(arr,idx+1);
}
int main(){
    vector<int> arr = {2,3,5,6,7,8};
    printRec(arr,0);
}