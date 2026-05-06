class Solution {
public:
    bool func(vector<vector<char>>&board, string &word,int idx,int i,int j){
        if(idx==word.size()){
            return true;
        }
        if(i<0 || i>board.size()-1 || j<0 || j>board[0].size()-1){
            return false;
        }
        if(board[i][j]==word[idx]){
            idx++;
        }else{
            return false;
        }

        char val=board[i][j];
        board[i][j]='.';
        bool ans=
           func(board,word,idx,i-1,j)
        || func(board,word,idx,i+1,j)
        || func(board,word,idx,i,j-1)
        || func(board,word,idx,i,j+1);
        board[i][j]=val;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(func(board,word,0,i,j)){
                    return true;
                }
            }
        }
        return false;
    }
};