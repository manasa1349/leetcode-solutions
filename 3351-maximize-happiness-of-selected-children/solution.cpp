class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(),happiness.rend());
        int i=0;
        long long ans=0;
        while(k--){
            long long val=happiness[i]-i;
            if(val>0){
                ans+=val;
                i++;
            }else{
                break;
            }
        }
        return ans;
    }
};
