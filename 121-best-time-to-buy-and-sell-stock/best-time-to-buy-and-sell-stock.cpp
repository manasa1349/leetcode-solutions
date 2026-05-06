class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int mn=INT_MAX;
        int ans=INT_MIN;
        for(int i=0;i<arr.size();i++){
            mn=min(mn,arr[i]);
            ans=max(ans,arr[i]-mn);
        }
        return ans;
    }
};