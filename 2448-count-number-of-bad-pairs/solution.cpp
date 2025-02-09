class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        //nums[i]-i!=nums[j]-j;
        long long ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int k=i-nums[i];
            int gcnt=mp[k];
            ans+=i-gcnt;
            mp[k]=gcnt+1;
        }
        return ans;
    }
};
