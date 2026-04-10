class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        bool chk=false;
        for(auto i:mp){
            int n=i.second.size();
            if(n>=3){
                chk=true;
            }
            for(int j=0;j<=n-3;j++){
                int diff=(  (i.second[j+2]-i.second[j+1]) + (i.second[j+1]-i.second[j]) + (i.second[j+2]-i.second[j]) );
                ans=min(ans,diff);
            }
        }
        if(!chk) return -1;
        return ans;
    }
};