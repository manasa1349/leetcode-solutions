class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        // Since nums[i] <= n, we can use a 2D array to store up to 3 most recent indices
        // indices[val][0] = count, indices[val][1-3] = the last 3 positions
        int last[101][4] = {0}; 
        int ans = INT_MAX;

        for (int i = 0; i < n; i++) {
            int val = nums[i];
            last[val][0]++; // increment count
            
            // Shift indices to keep the last three
            last[val][1] = last[val][2];
            last[val][2] = last[val][3];
            last[val][3] = i;

            // If we have seen this number at least 3 times
            if (last[val][0] >= 3) {
                // Distance = 2 * (current_index - index_from_2_occurrences_ago)
                ans = min(ans, 2 * (last[val][3] - last[val][1]));
            }
        }

        return (ans == INT_MAX) ? -1 : ans;
    }
};
