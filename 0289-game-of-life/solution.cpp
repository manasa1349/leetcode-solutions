class Solution {
public:
    bool check(int i,int j,int n,int m){
        if(i>=0 && i<n && j>=0 && j<m){
            return true;
        }
        return false;
    }
    bool zero(int i, int j,int n,int m,vector<vector<int>>& arr){
        int cnt=((check(i-1,j-1,n,m))?arr[i-1][j-1]:0)
                +((check(i-1,j,n,m))?arr[i-1][j]:0)
                +((check(i-1,j+1,n,m))?arr[i-1][j+1]:0)
                +((check(i,j-1,n,m))?arr[i][j-1]:0)
                +((check(i,j+1,n,m))?arr[i][j+1]:0)
                +((check(i+1,j-1,n,m))?arr[i+1][j-1]:0)
                +((check(i+1,j,n,m))?arr[i+1][j]:0)
                +((check(i+1,j+1,n,m))?arr[i+1][j+1]:0);
        if(cnt==3){
            return true;
        }
        return false; 
    }
    bool one(int i, int j,int n,int m,vector<vector<int>>& arr){
        int cnt=((check(i-1,j-1,n,m))?arr[i-1][j-1]:0)
                +((check(i-1,j,n,m))?arr[i-1][j]:0)
                +((check(i-1,j+1,n,m))?arr[i-1][j+1]:0)
                +((check(i,j-1,n,m))?arr[i][j-1]:0)
                +((check(i,j+1,n,m))?arr[i][j+1]:0)
                +((check(i+1,j-1,n,m))?arr[i+1][j-1]:0)
                +((check(i+1,j,n,m))?arr[i+1][j]:0)
                +((check(i+1,j+1,n,m))?arr[i+1][j+1]:0);
        if(cnt>3 || cnt<2){
            return true;
        }
        return false; 
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==1){
                    if(one(i,j,n,m,board)){
                        mp.push_back({i,j});
                    }
                }else{
                    if(zero(i,j,n,m,board)){
                        mp.push_back({i,j});
                    }
                }
            }
        }
        for(auto &it:mp){
            int i=it[0];
            int j=it[1];
            board[i][j]=(!board[i][j]);
        }
    }
};
