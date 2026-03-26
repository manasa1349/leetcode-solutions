class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int val=nums.size()/3;
        vector<int>ans;
        for(auto i:mp){
            if(i.second>val){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};