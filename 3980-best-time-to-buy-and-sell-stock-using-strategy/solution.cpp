class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        int n=prices.size();
        vector<long long>pre(n+1,0);
        vector<long long>sumprice(n+1,0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+(1LL*prices[i]*strategy[i]);
            sumprice[i+1]=sumprice[i]+prices[i];
        }
        long long ans=pre.back();
        long long l=0,r=k;
        while(r<=n){
            int idx=l+(k/2);
            long long rem=pre.back()-pre[r]+pre[l];
            long long sum=sumprice[r]-sumprice[idx];
            // for(int i=idx;i<r;i++){
            //     sum+=(prices[i]);
            // }
            ans=max(ans,sum+rem);
            l++;
            r++;
        }
        return ans;
    }
};
