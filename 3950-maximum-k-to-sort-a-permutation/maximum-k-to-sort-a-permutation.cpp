class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans=INT_MAX;
        vector<int>arr(nums.begin(),nums.end());
        sort(arr.begin(),arr.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=arr[i]) ans&=nums[i];
        }
        return ans==INT_MAX?0:ans;
    }
};