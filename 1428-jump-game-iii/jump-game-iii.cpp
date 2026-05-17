class Solution {
public:
    bool bfs(int i,vector<int>&arr,int n){
        queue<int>q;
        q.push(i); //st idx
        while(!q.empty()){
            int idx=q.front();
            q.pop();
            if(arr[idx]==0) return true;//condition check
            if(arr[idx]<0) continue; //already visited
            if(idx+arr[idx]<n){
                q.push(idx+arr[idx]);
            }
            if(idx-arr[idx]>=0){
                q.push(idx-arr[idx]);
            }
            arr[idx]=-arr[idx]; //making negative
        }
        return false;
    }
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        return bfs(start,arr,n);
    }
};