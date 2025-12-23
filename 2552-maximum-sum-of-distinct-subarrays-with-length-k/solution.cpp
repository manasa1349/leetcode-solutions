class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0;
        long long sum=0;
        int n=nums.size();
        unordered_map<int,int>mp;
        int chk=0;
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
            sum+=nums[i];
        }
        if(mp.size()==k){
            ans=sum;
        }
        int l=0,r=k;
        while(r<n){
            mp[nums[l]]--;
            if(mp[nums[l]]==0){
                mp.erase(nums[l]);
            }
            mp[nums[r]]++;
            sum-=nums[l];
            sum+=nums[r];
            if(mp.size()==k){
                ans=max(ans,sum);
            }
            l++;
            r++;
        }
        return ans;
    }
};
