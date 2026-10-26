#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void print(vector<int> &arr){
    for(int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr ={5,4,3,2,1};
    int n = arr.size();
    print(arr);
    //one pass.....
    for(int i= 0;i<n-1;i++){ // n-1 times it can be 0 to n-2 total times it will occue is n-1...
     for(int j = 0;j<n-1-i;j++){
        if(arr[j] > arr[j+1])
        swap(arr[j],arr[j+1]);
     }
    }
    print(arr);
}
//optimised code...
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void print(vector<int> &arr){
    for(int ele: arr){
        cout<<ele<<" ";

    }
    cout<<endl;
}
int main(){
    vector<int>arr ={5,4,3,2,1};
    int n = arr.size();
    print(arr);
    int totalSwaps = 0;
   for(int i = 0;i<n-1;i++){
    int swaps = 0;
    for(int j =0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        swaps++;
        totalSwaps++;
    }
    if(swaps==0) break;
   }
   cout<<totalSwaps;
   print(arr);
}

