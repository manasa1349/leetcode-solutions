class Solution {
public:
    int func(vector<int>&nums,int idx){
        int n=nums.size();
        vector<int>dp(n+2,-1);
        dp[n+1]=0;
        dp[n]=0;
        for(int i=nums.size()-1;i>=0;i--){
            dp[i]=max(dp[i+1],nums[i]+dp[i+2]);
        }
        return dp[0];
    }
    int rob(vector<int>& nums) {
        return func(nums,0);
    }
};