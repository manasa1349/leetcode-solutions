class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int cnt=0;
        if(nums[0]>=nums[1] || nums[nums.size()-1]<=nums[nums.size()-2]){
            return false;
        }
        for(int i=1;i<nums.size()-1;i++){
            if((nums[i]>nums[i-1] && nums[i]>nums[i+1]) || (nums[i]<nums[i-1] && nums[i]<nums[i+1])){
                cnt++;
            }
            if(cnt>2 || nums[i]==nums[i+1]) return false;
        }
        return cnt==2;
    }
};