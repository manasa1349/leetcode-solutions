class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](auto &n1, auto &n2){
            return abs(n1)<abs(n2);
        });
        long long n=nums.size();
        long long l=0,r=n-1,ans=0;
        while(l<=r){
            long long val=nums[r]*nums[r];
            if(l!=r){
                val-=nums[l]*nums[l];
            }
            ans+=val;
            l++;
            r--;
        }
        return ans;
    }
};