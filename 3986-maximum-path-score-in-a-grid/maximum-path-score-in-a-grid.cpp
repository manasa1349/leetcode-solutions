class Solution {
public:
    int func(int i,int j,int n,int m,int cost,int k,vector<vector<int>>&arr,vector<vector<vector<int>>>&dp){
        if(j>m-1 || i>n-1){
            return -1e9;
        }
        if(arr[i][j]==1){
            cost+=1;
        }else if(arr[i][j]==2){
            cost+=1;
        }
        if(cost>k) return -1e9;
        if(i==n-1 && j==m-1){
            return arr[i][j];
        }
        int right=func(i,j+1,n,m,cost,k,arr,dp);
        int down=func(i+1,j,n,m,cost,k,arr,dp);
        int best=max(right,down);
        if(best == -1e9) return dp[i][j][cost]=-1e9;
        return dp[i][j][cost]=arr[i][j]+best;
    }
    int maxPathScore(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(k+1,-1)));
        dp[0][0][0]=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int c=0;c<=k;c++){
                    if(dp[i][j][c]==-1) continue;

                    if(j+1<m){
                        int ncost=c+(grid[i][j+1]==0?0:1);
                        if(ncost<=k){
                            dp[i][j+1][ncost]=max(dp[i][j+1][ncost],dp[i][j][c]+grid[i][j+1]);
                        }
                    }

                    if(i+1<n){
                        int ncost=c+(grid[i+1][j]==0?0:1);
                        if(ncost<=k){
                            dp[i+1][j][ncost]=max(dp[i+1][j][ncost],dp[i][j][c]+grid[i+1][j]);
                        }
                    }
                }
            }
        }
        int ans= *max_element(dp[n-1][m-1].begin(), dp[n-1][m-1].end());;
        return ans;
    }
};