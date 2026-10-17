class Solution {
public:
    int sum(int x) {
        int s = 0;
        while (x) {
            s += x % 10;
            x /= 10;
        }
        return s;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
            v.push_back({nums[i], i});

        sort(v.begin(), v.end(), [&](auto a, auto b) {
            int x = sum(a.first);
            int y = sum(b.first);

            if (x != y)
                return x < y;
            return a.first < b.first;
        });

        vector<bool> vis(n, false);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (vis[i] || v[i].second == i)
                continue;

            int j = i, cnt = 0;

            while (!vis[j]) {
                vis[j] = true;
                j = v[j].second;
                cnt++;
            }

            ans += cnt - 1;
        }

        return ans;
    }
};