class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        int ans=0;
        vector<vector<int>>pre(n+1,vector<int>(m+1,0));
        vector<vector<int>>xcnt(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                int val=0,isx=0;
                if(arr[i-1][j-1]=='X'){
                    val=1;
                    isx=1;
                }else if(arr[i-1][j-1]=='Y'){
                    val=-1;
                }
                pre[i][j]=val+pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1];
                xcnt[i][j]=isx+xcnt[i-1][j]+xcnt[i][j-1]-xcnt[i-1][j-1];
                if(pre[i][j]==0 && xcnt[i][j]>0){
                    ans++;
                }
            }
        }
        return ans;
    }
};