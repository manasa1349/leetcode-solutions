class Solution {
public:
    int trap(vector<int>& arr) {
        //min(nextMax,prevMax)
        int n=arr.size();
        vector<int>nextMax(n),prevMax(n);
        nextMax[n-1]=arr[n-1];
        prevMax[0]=arr[0];
        for(int i=1;i<n;i++){
            prevMax[i]=max(prevMax[i-1],arr[i]);
        }
        for(int i=n-2;i>=0;i--){
            nextMax[i]=max(nextMax[i+1],arr[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=abs(min(prevMax[i],nextMax[i])-arr[i]);
        }
        return ans;
    }
};