class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            reverse(grid[i].begin(),grid[i].end());
            int idx=lower_bound(grid[i].begin(),grid[i].end(),0)-grid[i].begin();
            cout<<idx<<" ";
            // ans+=(grid[i].size()-idx);
            ans+=idx;
        }
        return ans;
    }
};
