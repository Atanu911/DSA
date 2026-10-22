class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int low = 0;
        int  high = n-1;
        int lb=n;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]<target) low = mid+1;
            else if(arr[mid]>=target){
                lb = mid;
                high = mid-1;
            }
            
        }
        return lb;
    }
};
