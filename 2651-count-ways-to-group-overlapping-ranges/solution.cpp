class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        ans.push_back(arr[0]);
        for(int i=1;i<arr.size();i++){
            if(ans.back()[1]>=arr[i][0]){
                ans.back()[1]=max(ans.back()[1],arr[i][1]);
            }else{
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
    const long long MOD=(1e9+7);
    int countWays(vector<vector<int>>& arr) {
        vector<vector<int>>ans=merge(arr);
        long long n=ans.size();
        long long k=1;
        for(long long i=0;i<n;i++){
            k*=2;
            k=k%MOD;
        }
        return int(k);
    }
};
