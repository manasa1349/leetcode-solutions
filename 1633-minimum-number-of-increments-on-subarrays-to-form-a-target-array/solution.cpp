class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int res = 0;
        stack<int> st;
        st.push(0);

        for (int h : target) {
            if (h > st.top()) {
                res += (h - st.top());
                st.push(h);
            }else {
                while (!st.empty() && st.top() > h) st.pop();
                if (st.top() != h) st.push(h);
            }
        }
        return res;
    }
};
