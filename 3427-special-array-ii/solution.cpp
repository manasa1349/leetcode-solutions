class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>pre(nums.size(),0);
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]%2 == nums[i]%2){
                pre[i]=pre[i-1]+1;
            }else{
                pre[i]=pre[i-1];
            }
        }
        vector<bool>ans;
        for(int i=0;i<queries.size();i++){
            int diff=pre[queries[i][0]]-pre[queries[i][1]];
            ans.push_back(diff==0);
        }
        return ans;
    }
};
