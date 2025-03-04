class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l=0,r=0,odd=0,cnt=0,ans=0;
        while(r<nums.size()){
            if(nums[r]%2!=0){
                odd++;
                ans=0;
            }
            while(odd==k){
                ans++;
                if(nums[l]%2!=0){
                    odd--;
                }
                l++;
            }
            cnt+=ans;
            r++;
        }
        return cnt;
    }
};
