class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long frst=accumulate(begin(grid[0]),end(grid[0]),0LL);
        long long scnd=0;
        long long minsum=LONG_LONG_MAX;
        for(int i=0;i<grid[0].size();i++){
            frst-=grid[0][i];
            minsum=min(minsum,max(frst,scnd));
            scnd+=grid[1][i];
        }
        return minsum;
    }
};
