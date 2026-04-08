class Solution {
public:
    const long long MOD=1e9+7;
    int xorAfterQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<long long>nums(arr.begin(),arr.end());
        for(auto i:queries){
            int l=i[0],r=i[1],k=i[2],v=i[3];
            int idx=l;
            while(idx<=r){
                nums[idx]=(nums[idx]*v)%MOD;
                idx+=k;
            }
        }
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            ans^=nums[i];
        }
        return ans;
    }
};