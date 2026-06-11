class Solution {
public:
    long long power(long long base,long long exp){
        long long res = 1;
        long long mod = 1e9 + 7;
        
        while (exp > 0) {
            if (exp % 2 == 1) {
                res = (res * base) % mod;
            }
            base = (base * base) % mod;
            exp /= 2;
        }
        return res;
    }
    int dfs(vector<int>&vis,map<int,vector<int>>&mp,int idx){
        vis[idx]=1;
        int mxd=0;
        for(int i=0;i<mp[idx].size();i++){
            if(!vis[mp[idx][i]]){
                mxd=max(mxd,1+dfs(vis,mp,mp[idx][i]));
            }
        }
        return mxd;
    }
    int assignEdgeWeights(vector<vector<int>>& edges) {
        map<int,vector<int>>mp;
        int n=edges.size();
        for(int i=0;i<n;i++){
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>vis(n+2,0);
        int d=dfs(vis,mp,1);
        return power(2,d-1);
    }
};