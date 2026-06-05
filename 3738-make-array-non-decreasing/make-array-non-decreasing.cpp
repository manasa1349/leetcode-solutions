class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int mx=nums[0],cnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>=mx){
                mx=nums[i];
                cnt++;
            }
        }
        return cnt;
    }
};