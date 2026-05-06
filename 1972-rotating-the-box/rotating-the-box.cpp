class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++){
            int empty=m-1;
            for(int j=m-1;j>=0;j--){
                if(arr[i][j]=='*'){
                    empty=j-1;
                }else if(arr[i][j]=='#'){
                    arr[i][j]='.';
                    arr[i][empty]='#';
                    empty--;
                }

            }
        }
        vector<vector<char>>res(m,vector<char>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res[j][n-i-1]=arr[i][j];
            }
        }
        return res;
    }
};