class Solution {
public:
    void func(int idx,int tar,vector<int>arr,vector<vector<int>>&ans,vector<int>&ds){
        if(tar==0){
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<arr.size();i++){
            if(tar<arr[i]) break;
            if(i>idx && arr[i]==arr[i-1]){
                continue;
            }
            ds.push_back(arr[i]);
            func(i+1,tar-arr[i],arr,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(candidates.begin(),candidates.end());
        func(0,target,candidates,ans,ds);
        return ans;
    }
};