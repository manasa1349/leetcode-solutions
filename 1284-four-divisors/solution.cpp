class Solution {
public:
    int func(int n){
        int b=-1,a=-2;
        vector<int>ans;
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(b==i || a==n/i || a==b || cnt>4){
                break;
            }
            if(n%i==0){
                ans.push_back(i);
                if(i!=(n/i)){
                    ans.push_back(n/i);
                    cnt++;
                }
                cnt++;
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
