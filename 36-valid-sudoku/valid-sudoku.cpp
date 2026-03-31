class Solution {
public:
    bool check(vector<vector<char>>arr,int r,int c){
        int val=arr[r][c];
        for(int i=0;i<arr.size();i++){
            if(i!=c && arr[r][i]==val) return false;
            if(i!=r && arr[i][c]==val) return false;
        }
        int startRow = (r / 3) * 3;
        int startCol = (c / 3) * 3;
        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                if ((i != r || j != c) && arr[i][j] == val) {
                    return false;
                }
            }
        }
        return true;
        
    }
    bool isValidSudoku(vector<vector<char>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]!='.' && !check(arr,i,j)){
                    return false; 
                }
            }
        }
        return true;
    }
};