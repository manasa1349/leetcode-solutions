class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxf=0;
        for(auto i:mp){
            if(i.second>maxf){
                maxf=i.second;
            }
        }
        int cnt=0;
        for(auto i:mp){
            if(i.second==maxf){
                cnt++;
            }
        }
        return cnt*maxf;
    }
};
