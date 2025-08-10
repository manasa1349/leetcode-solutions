class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        for (int i = 0; i < k / 2; ++i) {
            int top_row_index = x + i;
            int bottom_row_index = x + k - 1 - i;

            for (int j = 0; j < k; ++j) {
                std::swap(grid[top_row_index][y + j], grid[bottom_row_index][y + j]);
            }
        }
        return grid;
    }
};
