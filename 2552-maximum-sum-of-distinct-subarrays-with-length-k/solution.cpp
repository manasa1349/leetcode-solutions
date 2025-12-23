class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0;
        long long sum=0;
        int n=nums.size();
        map<int,int>mp;
        int chk=0;
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
            sum+=nums[i];
        }
        chk=mp.size();
        if(chk==k){
            ans=sum;
        }
        int l=0,r=k;
        while(r<n){
            if(mp[nums[l]] && mp[nums[l]]==1){
                chk--;
            }
            mp[nums[l]]--;
            if(mp[nums[l]]==0){
                mp.erase(nums[l]);
            }
            mp[nums[r]]++;
            if(mp[nums[r]]==1){
                chk++;
            }
            sum-=nums[l];
            sum+=nums[r];
            if(chk==k){
                ans=max(ans,sum);
            }
            l++;
            r++;
        }
        return ans;
    }
};
