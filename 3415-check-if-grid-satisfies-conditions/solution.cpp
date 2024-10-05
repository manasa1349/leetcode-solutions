class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
    for(int i  = 0 ; i < grid.size() ; i++) {
        for(int j = 0 ; j < grid[i].size();j++) {
            int a = -1,b = -1;
            if(i+1 < grid.size()) a = grid[i+1][j];
            if(j+1 < grid[i].size()) b = grid[i][j+1];
            int c = grid[i][j];
            if((a == -1 || a == c) && (b == -1 || b != c)) continue;
            else return false;
        }
    }
    return true;
    
    }
};
