class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int>rowcnt(m),colcnt(n);
        unordered_map<int,pair<int,int>>mp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int k=mat[i][j];
                mp[k]={i,j};
            }
        }
        for(int i=0;i<arr.size();i++){
            auto [row,col]=mp[arr[i]];
            rowcnt[row]++;
            colcnt[col]++;
            if(rowcnt[row]==n || colcnt[col]==m){
                return i;
            }
        }
        return -1;
    }
};
