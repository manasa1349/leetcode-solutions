class Solution {
public:
    const long long MOD=1e9+7;
    int specialTriplets(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        unordered_map<long long,vector<long long>>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        for(int j=1;j<n-1;j++){
            long long l=0;
            long long val=nums[j]*2LL;
            if(mp.find(val)!=mp.end()){
                l=upper_bound(mp[val].begin(),mp[val].end(),j)-mp[val].begin();
                if(nums[j]==0){
                    ans+=((l-1)*(mp[val].size()-l))%MOD;
                }else{
                    
                    ans+=(l*(mp[val].size()-l))%MOD;
                }
            }
        }
        return ans%MOD;
    }
};
