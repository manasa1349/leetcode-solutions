class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& arr) {
        long long sum=0;
        long long n=arr.size();
        long long m=arr[0].size();
        long long ncnt=0;
        int min=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int val=abs(arr[i][j]);
                sum+=val;
                if(arr[i][j]<0){
                    ncnt++;
                }
                if(val<min){
                    min=val;
                }
            }
        }
        if(ncnt==0 || ncnt%2==0){
            return sum;
        }
        return sum-min-min;
    }
};
