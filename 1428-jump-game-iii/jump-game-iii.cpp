class Solution {
public:
    bool dfs(int i,vector<int>&arr,vector<int>&vis,int n){
        if(i<0 || i>=n || vis[i]){
            return false;
        }
        vis[i]=1;
        if(arr[i]==0){
            return true;
        }
        return (dfs(i+arr[i],arr,vis,n)) || (dfs(i-arr[i],arr,vis,n));
    }
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        vector<int>vis(n,0);
        return dfs(start,arr,vis,n);
    }
};