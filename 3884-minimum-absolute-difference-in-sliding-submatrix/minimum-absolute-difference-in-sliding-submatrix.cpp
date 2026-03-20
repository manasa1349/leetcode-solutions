class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& arr, int k) {
        int n=arr.size();
        int m=arr[0].size();
        vector<vector<int>>res(n-k+1,vector<int>(m-k+1,0));
        for(int i=0;i<=n-k;i++){
            for(int j=0;j<=m-k;j++){

                vector<int>karr;
                for(int x=i;x<i+k;x++){
                    for(int y=j;y<j+k;y++){
                        karr.push_back(arr[x][y]);
                    }
                }

                int diff=INT_MAX;
                sort(karr.begin(),karr.end());
                for(int x=1;x<karr.size();x++){
                    if(karr[x]==karr[x-1]) continue;
                    diff=min(diff,karr[x]-karr[x-1]);
                }

                if(diff!=INT_MAX){
                    res[i][j]=(diff);
                }
            }
        }
        return res;
    }
};