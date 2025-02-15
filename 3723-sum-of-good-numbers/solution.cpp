class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int l=0,r=0;
            if(i-k>=0) l=nums[i-k];
            if(i+k<nums.size()) r=nums[i+k];
            if(l==0 && r==0){
                ans+=nums[i];
            }
            else if(nums[i]>l && nums[i]>r) 
            {
                ans+=nums[i];
            }
        }
        return ans;
    }
};
