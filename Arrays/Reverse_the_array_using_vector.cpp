#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &v){
    for(int ele : v) cout<<ele<<" ";
    cout<<endl;
    
}
int main(){
    // int i =0;
    // int j= n-1;
    // int arr[] ={70,60,50,40,30,20,10};
    // int temp ;
    // while(i != j){
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    //     i++;
    //     j--;
    // }

    vector<int> arr ={70,60,50,40,30,20,10};
    print(arr);
    // int i = 0 ,j = arr.size()-1; //Only for the whole array items..

    //but if i want to reverse the only index 1,2,3...

    int arr[i] = 1, arr[j] = 3;
    while(i<j){
        // int temp = arr[i];
        // arr[i] = arr[j];
        // arr[j] = temp;
        // i++;
        // j--;

        // swap(arr[i],arr[j]);
        // i++;
        // j--;

        //if want to do only a part...
        swap(arr[i],arr[j]){
            i++;
            j--;
        }
       
    }
     print(arr);
}