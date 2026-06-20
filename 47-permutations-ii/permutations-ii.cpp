class Solution {
public:
    void func(vector<int>&nums,vector<vector<int>>&ans,vector<int>ds,vector<bool>vis){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1] && !vis[i-1] && !vis[i]) continue;
            if(!vis[i]){
                vis[i]=true;
                ds.push_back(nums[i]);
                func(nums,ans,ds,vis);
                ds.pop_back();
                vis[i]=false;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<bool>vis(n);
        func(nums,ans,ds,vis);
        return ans;
    }
};