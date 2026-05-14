class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mx=nums[n-1];
        if(n!=mx+1) return false;
        for(int i=1;i<n-1;i++){
            if(nums[i]!=nums[i-1]+1){
                return false;
            }
        }
        return nums[n-1]==nums[n-2];
    }
};