class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int cnt=1,j=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                cnt++;
            }else{
                cnt=1;
            }
            if(cnt<=k){
               nums[j++]=nums[i];
            }
        }
        nums.resize(j);
        return nums;
    }
};