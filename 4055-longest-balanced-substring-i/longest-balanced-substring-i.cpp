class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size(), ans = 0;
        
        for (int i = 0; i < n; i++) {
            int f[26] = {0}, uniq = 0, max_f = 0;
            
            for (int j = i; j < n; j++) {
                int c = s[j] - 'a';
                if (f[c] == 0) uniq++;
                f[c]++;
                max_f = max(max_f, f[c]);
                if (j - i + 1 == uniq * max_f) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};
