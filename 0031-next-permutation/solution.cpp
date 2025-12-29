class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                idx=i-1;
                break;
            }
        }
        if(idx!=-1){
            for(int i=n-1;i>idx;i--){
                if(nums[idx]<nums[i]){
                    swap(nums[idx],nums[i]);
                    sort(nums.begin()+idx+1,nums.end());
                    break;
                }
            }
        }else{
            sort(nums.begin(),nums.end());
        }
    }
};
