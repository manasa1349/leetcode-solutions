class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0,summ=0;
        for(auto &it:accounts){
            summ=accumulate(it.begin(),it.end(),0);
            if(summ>max){
                max=summ;
            }
        }
        return max;
    }
};
