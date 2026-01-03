class Solution {
public:
    const long long MOD=1e9+7;
    int numOfWays(int n) {
        long long tw=6,thr=6;
        for(int i=2;i<=n;i++){
            long long a=tw,b=thr;
            tw=((a*3)%MOD+(b*2)%MOD)%MOD;
            thr=((a*2)%MOD+(b*2)%MOD)%MOD;
        }
        return (tw+thr)%MOD;
    }
};
