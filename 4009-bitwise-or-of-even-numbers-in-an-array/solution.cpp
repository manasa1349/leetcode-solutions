class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int ans=0;
        bool iseven=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans|=nums[i];
                iseven=true;
            }
        }
        if(!iseven){
            return 0;
        }
        return ans;
    }
};
