class Solution {
public:
    string decodeCiphertext(string enc, int r) {
        int n = enc.size();
        if (r == 0 || n == 0) return "";
        
        int c = n / r;
        
        // Step 1: Fill matrix row-wise
        vector<vector<char>> mat(r, vector<char>(c));
        int idx = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                mat[i][j] = enc[idx++];
            }
        }
        
        // Step 2: Traverse diagonally
        string res = "";
        for (int j = 0; j < c; j++) {
            int i = 0, col = j;
            while (i < r && col < c) {
                res += mat[i][col];
                i++;
                col++;
            }
        }
        
        // Step 3: Remove trailing spaces
        while (!res.empty() && res.back() == ' ') {
            res.pop_back();
        }
        
        return res;
    }
};