class Solution {
public:
    int dp[301][5001];
    int  func(int k, vector<int>&arr,int i,int n){
        if(i==n || k<0){
            return 0;
        }
        if(k==0){
            return 1;
        }
        if(dp[i][k]!=-1){
            return dp[i][k];
        }
        int l=func(k-arr[i],arr,i,n);
        int r=func(k,arr,i+1,n);
        return dp[i][k]=l+r;
    }
    int change(int amount, vector<int>& coins) {
        memset(dp, -1, sizeof(dp));
        return func(amount,coins,0,coins.size());
    }
};