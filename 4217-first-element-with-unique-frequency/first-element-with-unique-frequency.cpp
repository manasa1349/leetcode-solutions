class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        unordered_map<int,int>cnt;
        for(auto i:mp){
            cnt[i.second]++;
        }
        for(auto i:nums){
            if(cnt[mp[i]]==1){
                return i;
            }
        }
        return -1;
    }
};