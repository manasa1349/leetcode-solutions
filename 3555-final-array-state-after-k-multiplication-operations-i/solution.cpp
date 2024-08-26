class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
            int k=*min_element(nums.begin(),nums.end());
            int idx=min_element(nums.begin(),nums.end())-nums.begin();
            nums[idx]=k*multiplier;
        }
        return nums;
    }
};
