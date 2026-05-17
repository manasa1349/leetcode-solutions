class Solution {
public:
    bool dfs(int i,vector<int>&arr,int n){
        if(i<0 || i>=n || arr[i]<0){
            return false;
        }
        if(arr[i]==0){
            return true;
        }
        arr[i]=-arr[i];
        return (dfs(i+arr[i],arr,n)) || (dfs(i-arr[i],arr,n));
    }
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        return dfs(start,arr,n);
    }
};