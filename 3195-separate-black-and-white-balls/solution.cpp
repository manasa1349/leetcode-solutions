class Solution {
public:
    long long minimumSteps(string s) {
        //1 before no.of 0's from last ->ans
        // if consecutive ones add 1 to ans.
        // 101001--> 011001 010101 001101 001011 000111 -->5
        //1100 -> 1010 1001 0101 0011-->4
        int n = s.length();
        int countZeros = 0, countOnesBeforeZeros = 0;
        long long swaps = 0;
        for (char c : s) {
            if (c == '0') countZeros++;
        }

        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') {
                countZeros--;
            } else {
                swaps += countZeros;
            }
        }
        return swaps;
    }
};
