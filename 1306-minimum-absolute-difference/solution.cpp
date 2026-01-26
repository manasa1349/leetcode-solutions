class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mn=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            mn=min(mn,arr[i+1]-arr[i]);
        }
        vector<vector<int>>res;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i] == mn){
                res.push_back({arr[i],arr[i+1]});
            }
        }
        return res;
    }
};
