class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>ans(queries.size(),0);
        for(int i=0;i<queries.size();i++){
            int a=queries[i][0];
            int b=queries[i][1];
            for(int j=a;j<=b;j++){
                ans[i]^=arr[j];
            }
        }
        return ans;
    }
};
