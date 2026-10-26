class Solution {
public:
    int ans=0;
    void bfs(vector<vector<int>>& grid, int k,vector<vector<int>>&vis,int i,int j,int n,int m){
        queue<pair<int,int>>q;
        int delr[]={-1,1,0,0};
        int delc[]={0,0,-1,1};
        q.push({i,j});
        vis[i][j]=1;
        long long sum=0;
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            sum+=grid[r][c];
            q.pop();
            for(int k=0;k<4;k++){
                int nr=r+delr[k],nc=c+delc[k];
                if(nr<0 || nr>=n || nc<0 || nc>=m) continue;
                if(grid[nr][nc]!=0 && !vis[nr][nc]){
                    vis[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
        }
        if(sum%k==0) ans++;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0 && !vis[i][j]){
                    bfs(grid,k,vis,i,j,n,m);
                }
            }
        }
        return ans;
    }
};