class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        const int MOD = 12345;
        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<int>> result(rows, vector<int>(cols));

        // Step 1: Compute suffix products (elements after current cell)
        long long suffixProduct = 1;
        for (int r = rows - 1; r >= 0; r--) {
            for (int c = cols - 1; c >= 0; c--) {
                result[r][c] = suffixProduct;
                suffixProduct = (suffixProduct * (grid[r][c] % MOD)) % MOD;
            }
        }

        // Step 2: Multiply with prefix products (elements before current cell)
        long long prefixProduct = 1;
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                result[r][c] = (result[r][c] * prefixProduct) % MOD;
                prefixProduct = (prefixProduct * (grid[r][c] % MOD)) % MOD;
            }
        }

        return result;
    }
};