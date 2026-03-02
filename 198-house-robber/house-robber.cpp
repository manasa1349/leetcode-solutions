class Solution {
public:
    int func(vector<int>&nums,int idx,vector<int>&dp){
        if(idx>=nums.size()){
            return 0;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        return dp[idx]=max(func(nums,idx+1,dp),
        nums[idx]+func(nums,idx+2,dp));
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return func(nums,0,dp);
    }
};