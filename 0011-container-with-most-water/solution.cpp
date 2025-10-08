class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n=arr.size();
        int l=0,r=n-1;
        int ans=0;
        while(l<r){
            int ar=min(arr[l],arr[r])*(r-l);
            ans=max(ans,ar);
            if(arr[l]<arr[r]){
                l++;
            }else{
                r--;
            }
        }
        return ans;
    }
};
