class Solution {
public:
    int ans=INT_MAX;
    int func(int n){
        int sm=0;
        while(n){
            sm+=n%10;
            n/=10;
        }
        return sm;
    }
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            ans=min(ans,func(nums[i]));
        }
        return ans;
    }
};