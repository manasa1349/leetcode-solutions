class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>arr(n,vector<int>(n));
        int r=n-1,l=0,t=0,b=n-1,cnt=1;
        while(l<=r && t<=b){
            for(int i=l;i<=r;i++){
                arr[t][i]=cnt;
                cnt++;
            }
            t++;
            for(int i=t;i<=b;i++){
                arr[i][r]=cnt;
                cnt++;
            }
            r--;
            for(int i=r;i>=l;i--){
                arr[b][i]=cnt;
                cnt++;
            }
            b--;
            for(int i=b;i>=t;i--){
                arr[i][l]=cnt;
                cnt++;
            }
            l++;
        }
        return arr;
    }
};