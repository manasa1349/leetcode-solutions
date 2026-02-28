class Solution {
public:
    int concatenatedBinary(int n) {
        // string ans="";
        // for(int i=1;i<=n;i++){
        //     string binary_str = bitset<32>(i).to_string();
        //     ans+=binary_str;
        // }
        // return stoi(ans, nullptr, 2);
        long long ans = 0;
        int mod = 1e9 + 7;
        
        for (int i = 1; i <= n; i++) {
            string binary_str = bitset<32>(i).to_string();
            binary_str.erase(0, min(binary_str.find_first_not_of('0'), binary_str.size() - 1));
            
            for (char c : binary_str) {
                ans = (ans * 2 + (c - '0')) % mod;
            }
        }
        return (int)ans;
    }
};