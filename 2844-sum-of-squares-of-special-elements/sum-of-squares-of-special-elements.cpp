class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans=0,n=nums.size();
        for(int i=1;i<=n;i++){
            if(n%i==0){
                ans+=pow(nums[i-1],2);
            }
        }
        return ans;
    }
};