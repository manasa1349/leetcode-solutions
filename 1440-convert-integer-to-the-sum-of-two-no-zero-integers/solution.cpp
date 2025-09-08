class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        int a = 1, b = n - 1;
        while (to_string(a).find('0') != string::npos || 
               to_string(b).find('0') != string::npos) {
            a++;
            b = n - a;
        }
        return {a, b};
    }
};

