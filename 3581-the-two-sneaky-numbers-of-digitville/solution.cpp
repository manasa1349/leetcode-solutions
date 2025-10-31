class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        long long n = nums.size() - 2;

        long long sum_nums = 0, sum_range = 0;
        int xor_nums = 0, xor_range = 0;

        for (int num : nums) {
            sum_nums += num;
            xor_nums ^= num;
        }

        for (int i = 0; i < n; i++) {
            sum_range += i;
            xor_range ^= i;
        }

        long long sum_diff = sum_nums - sum_range;
        int xor_diff = xor_nums ^ xor_range;

        // Find rightmost set bit in xor_diff
        int mask = xor_diff & (-xor_diff);

        int group1_xor = 0, group2_xor = 0;
        long long group1_sum = 0, group2_sum = 0;

        for (int num : nums) {
            if (num & mask) {
                group1_xor ^= num;
                group1_sum += num;
            } else {
                group2_xor ^= num;
                group2_sum += num;
            }
        }

        for (int i = 0; i < n; i++) {
            if (i & mask) {
                group1_xor ^= i;
                group1_sum -= i;
            } else {
                group2_xor ^= i;
                group2_sum -= i;
            }
        }

        int a = group1_xor;
        int b = group2_xor;

        return {a, b};

    }
};
