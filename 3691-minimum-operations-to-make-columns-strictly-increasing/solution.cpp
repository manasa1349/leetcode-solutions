class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int cnt=0;
        int rowsize=grid.size();
        int colsize=grid[0].size();
        for(int i=0;i<colsize;i++){
            for(int j=0;j<rowsize-1;j++){
                if(grid[j][i]>=grid[j+1][i]){
                    int diff=grid[j][i]-grid[j+1][i];
                    cnt+=(diff+1);
                    grid[j+1][i]+=(diff+1);
                }
            }
        }
        return cnt;
    }
};
