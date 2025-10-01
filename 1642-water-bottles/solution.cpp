class Solution {
public:
    int numWaterBottles(int nb, int ne) {
        int ans=nb;
        int rem=nb;
        while (rem >= ne) {
            int newBottles = rem / ne;
            ans += newBottles;
            rem = (rem % ne) + newBottles;
        }
        return ans;
    }
};
