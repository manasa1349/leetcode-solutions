class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int res1=nums[0],res2=nums[0];
        int mx=nums[0],mn=nums[0];
        for(int i=1;i<nums.size();i++){
            mx=max(nums[i],mx+nums[i]);
            res1=max(res1,mx);
        }
        for(int i=1;i<nums.size();i++){
            mn=min(nums[i],mn+nums[i]);
            res2=min(res2,mn);
        }
        return max(abs(res2),res1);
    }
};
