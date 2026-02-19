class Solution {
public:
    bool func(vector<int>nums,int st,int end,int a,int b,bool alt){
        if(st>end){
            return a>=b;
        }
        if(alt){//player 1
            return func(nums,st+1,end,a+nums[st],b,!alt) || //pick start
                   func(nums,st,end-1,a+nums[end],b,!alt);//pick end
        }else{//player 2
            return func(nums,st+1,end,a,b+nums[st],!alt) && //pick start
                   func(nums,st,end-1,a,b+nums[end],!alt);//pick end
        }
    }
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        return func(nums,0,n-1,0,0,true);
        // int mx=*max_element(nums.begin(),nums.end());
        // if(n%2!=0  && nums[n/2]==mx){
        //     return false;
        // }
        // return true;
    }
};