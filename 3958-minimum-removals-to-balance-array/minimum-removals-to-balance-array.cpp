class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0,r=0,ans=0;
        while(r<n){
            // mx=mn*k;
            while((long long)nums[r]>(long long)nums[l]*k){
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return n-ans;
    }
};