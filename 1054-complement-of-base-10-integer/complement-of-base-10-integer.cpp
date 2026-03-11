class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int ans=0,cnt=1;
        while(n){
            int val=n%2;
            if(val==0){
                ans+=cnt;
            }
            cnt*=2;
            n/=2;
        }
        return ans;
    }
};