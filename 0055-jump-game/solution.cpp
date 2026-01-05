class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return true;
        if(nums[0]==0) return false;
        int cidx=0;
        int gidx=0;
        for(int i=0;i<n-1;i++){
            gidx=max(i+nums[i],gidx);
            if(gidx>=n-1){
                return true;
            }
            if(i==cidx && i!=gidx){
                cidx=gidx;
            }else if(i==cidx && i==gidx){
                return false;
            }
        }
        return false;
    }
};
