class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lidx=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if (lidx == nums.size() || nums[lidx] != target) {
            return {-1, -1};
        }
        int uidx=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        if(nums[uidx]==target){
            return {lidx,uidx};
        }
        if(nums[uidx]!=target){
            return {lidx,-1};
        }
        return {-1,-1};
    }
};
