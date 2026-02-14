class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>>arr(101,vector<double>(101));
        arr[0][0]=poured;
        for(int i=0;i<=query_row;i++){
            for(int j=0;j<=i;j++){
                if(arr[i][j]>1.0){
                    double rem=arr[i][j]-1.0;
                    arr[i][j]=1.0;//current parent glass
                    arr[i+1][j]+=rem/2.0;//left child glass
                    arr[i+1][j+1]+=rem/2.0;//right child glass
                }
            }
        }
        return arr[query_row][query_glass];
    }
};