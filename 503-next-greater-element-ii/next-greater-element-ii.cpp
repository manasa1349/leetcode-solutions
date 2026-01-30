class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        int n=nums.size();
        st.push(-1);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[i]>=st.top()){
                st.pop();
            }
            st.push(nums[i]);
        }
        vector<int>res(n,-1);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[i]>=st.top()){
                st.pop();
            }
            if(!st.empty()){
                res[i]=(st.top());
            }
            st.push(nums[i]);
        }
        return res;
    }
};