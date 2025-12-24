class Solution {
public:
    const long long MOD=1e9+7; 
    int specialTriplets(vector<int>& nums) {
        unordered_map<long long,long long>lmp;
        unordered_map<long long,long long>rmp;
        int n=nums.size();
        long long ans=0;
        for(int i=1;i<n;i++){
            rmp[nums[i]]++;
        }
        lmp[nums[0]]++;
        for(int j=1;j<n-1;j++){
            long long val=nums[j]*2LL;
            rmp[nums[j]]--;
            if(rmp[nums[j]]==0){
                rmp.erase(nums[j]);
            }
            ans+=(lmp[val]*rmp[val])%MOD;
            lmp[nums[j]]++;
        }
        return ans%MOD;
    }
};
