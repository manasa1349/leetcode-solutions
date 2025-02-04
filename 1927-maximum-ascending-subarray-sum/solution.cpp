class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxi=0;
        int sum=nums[0];
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                sum+=nums[i+1];
            }else{
                maxi=max(maxi,sum);
                sum=nums[i+1];
            }
        }
        maxi=max(maxi,sum);
        if(maxi==0) return sum;
        return maxi;
    }
};
