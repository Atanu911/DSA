class Solution {
public:
    int lowerBound(vector<int>&nums,int target){
        int n = nums.size();
        int low = 0; int high =n-1;
        while(low<high){
            int mid = (low+high)/2;
            if(nums[mid]>=target){
                high = mid;


            }
            else low = mid+1;
        }
        return low;
    }
    int maximumCount(vector<int>& nums) {
        int n =nums.size();
        int negCount = lowerBound(nums,0);
        int posCount = n-lowerBound(nums,1);
        return max(negCount,posCount);

    }
};