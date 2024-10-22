class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int leftsum=0;
        int rightsum=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++){
            rightsum-=nums[i];
            ans[i]=abs(leftsum-rightsum);
            leftsum+=nums[i];
        }
        return ans;
    }
};

