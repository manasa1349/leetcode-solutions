class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n=arr.size();
        stack<int>st;
        // 1. Longest non-decreasing prefix
        int leftEnd = 0;
        for (int i = 0; i < n; i++) {
            if (!st.empty() && st.top() > arr[i]) break;
            st.push(arr[i]);
            leftEnd = i;
        }

        if (leftEnd == n - 1) return 0;

        // 2. Longest non-decreasing suffix
        while (!st.empty()) st.pop();
        int rightStart = n - 1;
        for (int i = n - 1; i >= 0; i--) {
            if (!st.empty() && st.top() < arr[i]) break;
            st.push(arr[i]);
            rightStart = i;
        }

        // 3. Remove prefix or suffix
        int ans = min(n - leftEnd - 1, rightStart);

        // 4. Merge prefix and suffix
        int i = 0, j = rightStart;
        while (i <= leftEnd && j < n) {
            if (arr[i] <= arr[j]) {
                ans = min(ans, j - i - 1);
                i++;
            } else {
                j++;
            }
        }

        return ans;
    }
};
