class Solution {
public:
    long long reverse(int n){
        long long ans=0;
        while(n){
            ans=ans*10+(n%10);
            n/=10;
        }
        return ans;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<long long,int>mp;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            long long rev=reverse(nums[i]);
            if(mp.find(nums[i])!=mp.end()){
                int val=abs(i-mp[nums[i]]);
                ans=min(ans,val);
            }
            mp[rev]=i;
        }
        return ans==INT_MAX?-1:ans;
    }
};