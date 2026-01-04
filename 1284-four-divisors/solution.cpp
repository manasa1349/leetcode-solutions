class Solution {
public:
    int func(int n){
        int b=-1,a=-2;
        set<int>ans;
        for(int i=1;i<=n;i++){
            if(b==i || a==n/i || a==b){
                break;
            }
            if(n%i==0){
                ans.insert(i);
                ans.insert(n/i);
            }
            a=i;
            b=n/i;
        }
        if(ans.size()==4){
            return accumulate(ans.begin(),ans.end(),0);
        }
        return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int val=func(nums[i]);
            if(val!=0){
                ans+=val;
            }
        }
        return ans;
    }
};
