#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>num ={179,124,120,99,87,79,44,22,19,-4};
    int n = num.size();
    int high = 0;
    int low = n-1;
    int target = 44;
    int  result = -1 ;
    while(high<=low){
        int mid = (high+low)/2;
        if(target<num[mid]) high = mid+1;
        else if(target>num[mid]) low = mid-1;
        else result = mid;
        
    }
    if(result!=false){
        cout<<"The target element is "<<result;
    }
    else{
        cout<<"The target element is not found.";
    }
    
  
}
