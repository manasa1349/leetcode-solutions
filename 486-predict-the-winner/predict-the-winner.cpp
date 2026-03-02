class Solution {
public:
    map<string,bool>mpp;
    bool func(vector<int>nums,int st,int end,int a,int b,bool alt){
        if(st>end){
            return a>=b;
        }
        //if(dp[st][end]!=-1) return dp[st][end];
        if(mpp.find(to_string(st)+to_string(end)+to_string(a)+to_string(b))!=mpp.end()) return mpp[to_string(st)+to_string(end)+to_string(a)+to_string(b)];
        bool left = false, right = false;
        if(alt){//player 1
            left =  func(nums,st+1,end,a+nums[st],b,!alt) || //pick start
                   func(nums,st,end-1,a+nums[end],b,!alt);//pick end
        }else{//player 2
            right =  func(nums,st+1,end,a,b+nums[st],!alt) && //pick start
                   func(nums,st,end-1,a,b+nums[end],!alt);//pick end
        }
        return mpp[to_string(st)+to_string(end)+to_string(a)+to_string(b)] = left ||right;
    }
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
       // memset(dp,-1,sizeof(dp));
        return func(nums,0,n-1,0,0,true);
    }
};