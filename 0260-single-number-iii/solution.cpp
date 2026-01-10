class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size()==2){
            return nums;
        }
        long long totalXOR=0;
        for(int i=0;i<nums.size();i++){
            totalXOR^=nums[i];
        }
        long long  diffBit = totalXOR & -totalXOR;
        int x = 0, y = 0;
        for (int num : nums) {
            if (num & diffBit) {
                x ^= num;
            } else {
                y ^= num;
            }
        }
        return {x, y};
    }
};
