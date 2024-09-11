class Solution {
public:
    int minBitFlips(int start, int goal) {
        int res=start^goal;
        return bitset<32>(res).count();
    }
};
