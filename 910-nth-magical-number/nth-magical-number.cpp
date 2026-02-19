class Solution {
public:
    long long const mod=1000000007;
    int nthMagicalNumber(int n, int a, int b) {
        //(mid/a)+(mid/b)-(mid/lcm(a,b))
        long long l=min(a,b);
        long long h=1ll*n*min(a,b);
        long long ans=0;
        long long lcm=(1ll*a*b)/__gcd(a,b);
        while(l<=h){
            long long m=l+(h-l)/2;
            long long tcnt=(m/a) + (m/b) - (m/lcm);
            if(tcnt<n){
                l=m+1;
            }else{
                ans=m%mod;
                h=m-1;
            }
        }
        return ans%mod;
    }
};