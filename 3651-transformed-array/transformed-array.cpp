class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        for(int i=0;i<n;i++){
            int idx=i;
            if(nums[i]>0){
                idx=(i+nums[i])%n;
            }else if(nums[i]<0){
                idx=(i- (abs(nums[i])%n) +n)%n;
            }
            res[i]=nums[idx];
        }
        return res;
    }
};