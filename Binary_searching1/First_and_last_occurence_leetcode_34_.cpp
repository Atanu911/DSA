class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        vector<int>ans(2,-1);
        int n = arr.size();
        int low  = 0;
        int high = n-1;
        while(low<=high){
            int mid = (high+low)/2;
            if(target<arr[mid]) high = mid-1;
            else if(target>arr[mid]) low = mid+1;
            else {
                ans[0] = mid;
                high = mid -1;
            }
        }
        low = 0;
        high = n-1;
        while(low<= high){
           int mid = (high+low)/2;
            if(target<arr[mid]) high = mid-1;
            else if(target>arr[mid])low = mid+1;
            else{
                ans[1] = mid;
                low = mid+1;
            }
        }
        return ans;
    }
};