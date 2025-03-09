class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        vector<int>v(colors.begin(),colors.end());
        for(int i=0;i<k-1;i++){
            v.push_back(colors[i]);
        }
        int n = colors.size(), count = 0;
        bool isValid = true;

        for (int j = 1; j < k; j++) {
            if (v[j] == v[j - 1]) {
                isValid = false;
                break;
            }
        }
        if (isValid) count++;

        for (int i = 1; i < n; i++) {
            if (v[i + k - 1] == v[i + k - 2]) {
                isValid = false;
            }
            if (v[i] == v[i - 1]) {
                isValid = true;
                for (int j = i; j < i + k - 1; j++) {
                    if (v[j] == v[j + 1]) {
                        isValid = false;
                        break;
                    }
                }
            }
            if (isValid) count++;
        }
        return count;
    }
};
