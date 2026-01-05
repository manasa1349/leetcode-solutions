class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int curr=0,gidx=0,ans=0;
        for(int i=0;i<n;i++){
            if(curr>=n-1){
                return ans;
            }
            gidx=max(gidx,i+nums[i]);
            if(i==curr && i!=gidx){
                ans++;
                curr=gidx;
            }
        }
        return ans;
    }
};
