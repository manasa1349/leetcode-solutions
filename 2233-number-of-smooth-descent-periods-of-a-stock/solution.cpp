class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long n=prices.size();
        long long cnt=0;
        // if(n>=2 && (prices[0]==(prices[1]+1))){
        //     cnt=1;
        // }
        long long ans=0;
        for(int i=1;i<n;i++){
            if(prices[i]==prices[i-1]-1){
                cnt++;
                cout<<prices[i]<<endl;
            }else{
                cnt=0;
            }
            ans+=(cnt+1);
        }
        return ans+1;
    }
};
