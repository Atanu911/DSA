#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void print(vector<int>&arr){
    for(int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr ={5,4,3,6,2,1};
    int n = arr.size();
    print(arr);
    for(int j=0;j<n-1;j++){
        int min=arr[j];
        int minIdx = j;
        for(int i=j;i<n;i++){
            if(arr[i]<min){
                min=arr[i];
                minIdx=i;
                
            }
            
        }
        swap(arr[j],arr[minIdx]);
    }
    print(arr);
}