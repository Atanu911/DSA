class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low=0,high =n-1;
        if(n==1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];
        while(low<=high){
            int mid = low +(high-low)/2;
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1])return nums[mid];
            int f = mid,s=mid; // f is the first mid...
            if(nums[mid] == nums[mid-1]) f=mid-1; // f-low is left side length..
            else s=mid+1;
            if((f-low)%2 ==1) high = f-1;
            else low = s+1;
        }
        return 8844;
    }
};