class Solution {
public:
    int countSubmatrices(vector<vector<int>>& arr, int k) {
        int n=arr.size();
        int m=arr[0].size();
        int ans=0;
        vector<vector<int>>pre(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                pre[i][j]=arr[i-1][j-1]+pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1];
                if(pre[i][j]<=k){
                    ans++;
                }
            }
        }
        return ans;
    }
};