class Solution {
public:
    bool func(int k,int m,int n,int threshold,vector<vector<int>>pre){
        for(int i=0;i+k<=n;i++){
            for(int j=0;j+k<=m;j++){
                int val=pre[i+k][j+k]+pre[i][j]-pre[i+k][j]-pre[i][j+k];
                if(val<=threshold){
                    return true;
                }
            }
        }
        return false;
    }
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>pre(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                pre[i][j]=pre[i-1][j]+pre[i][j-1]+mat[i-1][j-1]-pre[i-1][j-1];//mat->0-indexed, pre->1-indexed
            }
        }
        int l=1,h=min(m,n);
        int ans=0;
        while(l<=h){
            int mid=(l+h)/2;
            if(func(mid,m,n,threshold,pre)){
                ans=mid;
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        return ans;
    }
};
