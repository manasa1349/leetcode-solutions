class Solution {
public:
    int sum_dig(int n){
        int sum=0;
        if(n<10) return n;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>mp;
        for(int i=lowLimit;i<=highLimit;i++){
            int s=sum_dig(i);
            mp[s]++;
        }
        int ans=0;
        for(auto it:mp){
            if(it.second>ans){
                ans=it.second;
            }
            cout<<it.first<<" "<<it.second<<endl;
        }
        return ans;
    }
};
