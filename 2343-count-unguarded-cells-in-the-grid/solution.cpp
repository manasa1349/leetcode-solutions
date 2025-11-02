class Solution {
public:
    void func(int r,int c,int m,int n,vector<vector<int>>&a){
        for(int i=r-1;i>=0;i--){
            if(a[i][c]==2 || a[i][c]==3){
                break;
            }
            a[i][c]=1;
        }
        for(int i=r+1;i<m;i++){
            if(a[i][c]==2 || a[i][c]==3){
                break;
            }
            a[i][c]=1;
        }
        for(int i=c-1;i>=0;i--){
            if(a[r][i]==2 || a[r][i]==3){
                break;
            }
            a[r][i]=1;
        }
        for(int i=c+1;i<n;i++){
            if(a[r][i]==2 || a[r][i]==3){
                break;
            }
            a[r][i]=1;
        }
    }
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {        int cnt=0;
        vector<vector<int>>arr(m,vector<int>(n,0));
        for(int i=0;i<guards.size();i++){
            arr[guards[i][0]][guards[i][1]]=2;
        }
        for(int i=0;i<walls.size();i++){
            arr[walls[i][0]][walls[i][1]]=3;
        }
        for(int i=0;i<guards.size();i++){
            func(guards[i][0],guards[i][1],m,n,arr);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
    //guards->2
    //walls->3
};
