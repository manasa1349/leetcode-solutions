class Solution {
public:
    bool prime(int n){
        if(n<=1) return false;
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++){
            int cnt=__builtin_popcount(i);
            if(prime(cnt)){
                ans++;
            }
        }
        return ans;
    }
};