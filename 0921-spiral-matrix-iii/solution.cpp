class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int cnt=1;
        int i=rStart,j=cStart;
        // vector<vector<int>>ans(rows,vector<int>(cols));
        vector<vector<int>>ans;
        int r=0;
        while(ans.size()<rows*cols){
            int fcnt=cnt;
            int scnt=cnt;
            while(fcnt--){
                if(i>=0 && j>=0 && i<rows && j<cols){
                    ans.push_back({i,j});
                }
                j++;
            }
            while(scnt--){
                if(i>=0 && j>=0 && i<rows && j<cols){
                    ans.push_back({i,j});
                }
                i++;
            }
            cnt++;
            int tcnt=cnt;
            int ffcnt=cnt;
            while(tcnt--){
                if(i>=0 && j>=0 && i<rows && j<cols){
                    ans.push_back({i,j});
                }
                j--;
            }
            while(ffcnt--){
                if(i>=0 && j>=0 && i<rows && j<cols){
                    ans.push_back({i,j});
                }
                i--;
            }
            cnt++;
        }
        return ans;
    }
};
