class Solution {
public:
    bool func(int i,int j,vector<vector<int>>grid){
        set<int>s;
        for(int m=0;m<3;m++){
            for(int n=0;n<3;n++){
                if(grid[m+i][n+j]<1 || grid[m+i][n+j]>9){
                    return false;
                }
                s.insert(grid[m+i][n+j]);
            }
        }
        if(s.size()!=9) return false;
        if(grid[i][j]+grid[i][j+1]+grid[i][j+2]!=15)return false;
        if(grid[i+1][j]+grid[i+1][j+1]+grid[i+1][j+2]!=15) return false;
        if(grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2]!=15)return false;
        if(grid[i][j]+grid[i+1][j]+grid[i+2][j]!=15)return false;
        if(grid[i][j+1]+grid[i+1][j+1]+grid[i+2][j+1]!=15)return false;
        if(grid[i][j+2]+grid[i+1][j+2]+grid[i+2][j+2]!=15)return false;
        if(grid[i][j]+grid[i+1][j+1]+grid[i+2][j+2]!=15)return false;
        if(grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j]!=15)return false;                
        return true;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        for(int i=0;i<n-2;i++){
            for(int j=0;j<m-2;j++){
                if(func(i,j,grid)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
