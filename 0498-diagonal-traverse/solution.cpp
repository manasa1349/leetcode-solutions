class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        // vector<vector<int>>ans(n,vector<int>(m));
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int k=i+j;
                mp[k].push_back(arr[i][j]);
            }
        }
        vector<int>res;
        for(auto &[i,v]:mp){
            if(i%2!=0){
                for(auto &it:v){
                    res.push_back(it);
                }
            }else{
                for(int j=v.size()-1;j>=0;j--){
                    res.push_back(v[j]);
                }
            }
        }
        return res;
    }
};
