class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n=items.size();
        vector<int>gain(n);
        for(int i=0;i<n;i++){
            int cnt=1;
            for(int j=0;j<n;j++){
                if(i!=j && items[j][0]%items[i][0]==0){
                    cnt++;
                }
            }
            gain[i]=cnt;
        }

        vector<vector<int>>v(1501);
        for(int i=0;i<n;i++){
            v[items[i][1]].push_back(i);
        }

        const int neg=-1e9;
        vector<int>dp(budget+1,neg);
        dp[0]=0;
        int ans=0;

        for(int i=1500;i>=1;i--){
            vector<int>cur(budget+1,neg);
            for(int x:v[i]){
                for(int c=budget;c>=i;c--){
                    cur[c]=max(cur[c],dp[c-i]+gain[x]);
                    cur[c]=max(cur[c],cur[c-i]+gain[x]);
                }
            }

            for(int c=0;c<=budget;c++){
                if(cur[c]!=neg){
                    ans=max(ans,cur[c]+(budget-c)/i);
                }
            }

            for(int x:v[i]){
                for(int c=budget;c>=i;c--){
                    dp[c]=max(dp[c],dp[c-i]+gain[x]);
                }
            }
        }
        return ans;
    }
};