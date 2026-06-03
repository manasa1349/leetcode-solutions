class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>arr=grid;
        queue<pair<int,int>>q;
        //1st and last col
        for(int i=0;i<n;i++){
            if(grid[i][0]==1){
                q.push({i,0});
                vis[i][0]=1;
                arr[i][0]=0;
            }
            if(grid[i][m-1]==1){
                q.push({i,m-1});
                vis[i][m-1]=1;
                arr[i][m-1]=0;
            }
        }
        //1st and last col
        for(int i=0;i<m;i++){
            if(grid[0][i]==1){
                q.push({0,i});
                vis[0][i]=1;
                arr[0][i]=0;
            }
            if(grid[n-1][i]==1){
                q.push({n-1,i});
                vis[n-1][i]=1;
                arr[n-1][i]=0;
            }
        }
        int delta_i[]={0,0,-1,1};
        int delta_j[]={-1,1,0,0};
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int ni=i+delta_i[k];
                int nj=j+delta_j[k];
                if(ni>=0 && ni<n && nj>=0 && nj<m && grid[ni][nj]==1 && !vis[ni][nj]){
                    q.push({ni,nj});
                    vis[ni][nj]=1;
                    arr[ni][nj]=0;
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};