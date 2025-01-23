class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>row(n);
        vector<int>col(m);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    row[j]++;
                    col[i]++;
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    ans+=(1?(row[j]>1 || col[i]>1):0);
                }
            }
        }

        return ans;
    }
};
