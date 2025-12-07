class Solution {
public:
    int countOdds(int low, int high) {
        if(low%2==0 && high%2==0){
            return (high-low)/2;
        }
        return ((high-low)/2)+1;
    }
    // o e    1   6  5  3
    // e o    2   7  5  3
    // o o    1   5  4  3
    // e e    2   6  4  2
};
