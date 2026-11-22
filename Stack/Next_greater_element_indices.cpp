class NextGreaterElement{
    public:
    NextGreaterElement(vector<int>&arr){
        int n = arr.size();
        vector<int>ans(n,-1);
        stack<int>st;
        for(int i = n-1;i>=0;i--){
            while(arr[st.top()]<= arr[i]) st.pop() ;
            if(st.size() == 0) ans[i] = -1;
            else ans[i] = i;
            st.push(i);
        }
        return ans;
    }
};