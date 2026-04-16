class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        vector<int> ans;
        for (int qIdx : queries) {
            int val = nums[qIdx];
            const vector<int>& pos = mp[val];

            // If only one occurrence exists, there is no "other" index
            if (pos.size() < 2) {
                ans.push_back(-1);
                continue;
            }

            int i= lower_bound(pos.begin(), pos.end(), qIdx)-pos.begin();

            // Left neighbor index in pos array
            int left = (i - 1 + pos.size()) % pos.size();
            // Right neighbor index in pos array
            int right = (i + 1) % pos.size();

            int res = INT_MAX;
            for (int neighborIndex : {pos[left], pos[right]}) {
                if (neighborIndex == qIdx) continue;
                int d = abs(neighborIndex - qIdx);
                res = min({res, d, n - d});
            }
            ans.push_back(res);
        }
        return ans;
    }
};