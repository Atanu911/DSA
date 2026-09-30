#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;
void printReverseArray(vector<int>&arr,int idx){
    if(idx==arr.size())return; 
    printReverseArray(arr,idx+1);
    cout<<arr[idx]<<" ";
}
int main(){
    vector<int>arr = {1,2,3,4,5,6};
    printReverseArray(arr,0);
}

//second method..
// #include<iostream>
// #include<vector>
// using namespace std;
// void printReverseArray(vector<int>&arr,int idx){
//     if(idx== -1)return;
//     cout<<arr[idx]<<" ";
//     printReverseArray(arr,idx-1);
// }
// int main() {
//     vector<int>arr = {1,2,3,4,5};
//     printReverseArray(arr,arr.size()-1);
// }