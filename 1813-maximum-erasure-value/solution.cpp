class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>hash;
        int l=0,r=0,maxSum=0,sum=0;
        while(r<n){
            hash[nums[r]]++;
            sum+=nums[r];
            while(hash[nums[r]]>1){
                    hash[nums[l]]--;
                    sum-=nums[l];
                    l++;
            }
            maxSum=max(sum,maxSum);
            r++;
        }
        return maxSum;
    }
};
