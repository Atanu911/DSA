#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>arr ={93,17,4,64,46,18,3,61};
    int k = 3;
    int n = arr.size();
    for(int i = 0;i<k;i++){
        int min = arr[i];
        int minIdx = i;
        for(int j =i;i<n;i++ ){
            if(arr[j]<min){
                min=arr[j];
                minIdx=j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
    cout<<arr[k-1];
}