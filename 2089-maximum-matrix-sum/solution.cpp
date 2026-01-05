class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& arr) {
        long long sum=0;
        long long n=arr.size();
        long long m=arr[0].size();
        long long ncnt=0,zcnt=0;
        int min=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum+=abs(arr[i][j]);
                if(arr[i][j]<0){
                    ncnt++;
                }
                if(arr[i][j]==0){
                    zcnt++;
                }
                if(abs(arr[i][j])<min){
                    min=abs(arr[i][j]);
                    // sym=(arr[i][j]<=0);
                }
            }
        }
        if(ncnt==0 || ncnt%2==0|| zcnt!=0){
            return sum;
        }
        return sum-min-min;
    }
};
