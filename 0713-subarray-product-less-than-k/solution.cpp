class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0;
        int pro=1,cnt=0;
        if(k<=1) return 0;
        while(r<n){
            pro*=nums[r];
            while(l<n && pro>=k){
                pro=pro/nums[l];
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
};
