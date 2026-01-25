class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1 || k==1) return 0;
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        for(int i=0;i<=n-k;i++){
            int val=nums[i+k-1]-nums[i];
            // if(i>=k-1){
                ans=min(ans,val);
            // }
            cout<<val<<" ";
        }
        return ans;
    }

};
