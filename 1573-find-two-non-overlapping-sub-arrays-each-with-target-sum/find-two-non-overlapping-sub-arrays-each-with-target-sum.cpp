class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>pre(n,INT_MAX),suf(n,INT_MAX);
        int l=0,r=0,sum=0;
        while(r<n){
            sum+=arr[r];
            while(sum>k && l<=r){
                sum-=arr[l];
                l++;
            }
            if(sum==k){
                pre[r]=min(r!=0?pre[r-1]:INT_MAX,r-l+1);
            }else{
                if(r!=0){
                    pre[r]=pre[r-1];
                }
            }
            r++;
        }
        l=n-1,r=n-1,sum=0;
        while(r>=0){
            sum+=arr[r];
            while(sum>k && r<=l){
                sum-=arr[l];
                l--;
            }
            if(sum==k){
                suf[r]=min(r!=n-1?suf[r+1]:INT_MAX,l-r+1);
            }else{
                if(r!=n-1){
                    suf[r]=suf[r+1];
                }
            }
            r--;
        }
        int ans=INT_MAX;
        for(int i=0;i<n-1;i++){
            if(pre[i]!=INT_MAX && suf[i+1]!=INT_MAX){
                ans=min(ans,pre[i]+suf[i+1]);
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};