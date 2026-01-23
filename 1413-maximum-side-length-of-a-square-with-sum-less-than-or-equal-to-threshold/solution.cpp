class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>pre(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                pre[i][j]=pre[i-1][j]+pre[i][j-1]+mat[i-1][j-1]-pre[i-1][j-1];
            }
        }
        // int k=1;
        int ans=0;
        for(int k=1;k<=min(m,n);k++){
            bool chk=false;
            for(int i=0;i+k<=n;i++){
                for(int j=0;j+k<=m;j++){
                    int val=pre[i+k][j+k]+pre[i][j]-pre[i+k][j]-pre[i][j+k];
                    if(val<=threshold){
                        chk=true;
                        ans=k;
                        break;
                    }
                }
                if(chk){
                    break;
                }
            }
        }
        return ans;
    }
};
