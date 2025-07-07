class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });

        set<int> availableDays;
        for (int i = 1; i <= 100000; ++i) {
            availableDays.insert(i);
        }

        int cnt = 0;
        for (auto& event : events) {
            int start = event[0], end = event[1];
            auto it = availableDays.lower_bound(start);
            if (it != availableDays.end() && *it <= end) {
                cnt++;
                availableDays.erase(it); // mark day as used
            }
        }

        return cnt;
    }

};

