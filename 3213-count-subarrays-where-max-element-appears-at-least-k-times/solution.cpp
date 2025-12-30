class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long mx=*max_element(nums.begin(),nums.end());
        long long l=0,r=0;
        long long n=nums.size();
        long long cnt=0,ans=0;
        while(r<n){
            if(nums[r]==mx){
                cnt++;
            }
            while(cnt>=k){
                ans+=n-r;
                if(nums[l]==mx){
                    cnt--;
                }
                l++;
            }
            r++;
        }
        return ans;
    }
};
