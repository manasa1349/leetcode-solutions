class Solution {
public:
    int concatenatedBinary(int n) {
        long long ans=0;
        long long mod=1e9+7;

        for(int i=1;i<=n;i++){
            string bin=bitset<32>(i).to_string();
            bin.erase(0,min(bin.find_first_not_of('0'),bin.size()-1));
            
            for(auto c:bin){
                ans=((ans*2)+(c-'0'))%mod;
            }
        }
        return (int)ans;
    }
};