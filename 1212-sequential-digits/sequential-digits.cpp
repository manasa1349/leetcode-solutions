class Solution {
public:
    void func(int val,vector<int>&res,int low,int high){
        if(val>high){
            return;
        }
        if(val>=low){
            res.push_back(val);
        }
        int ld=val%10;
        if(ld<9){
            int k=(val*10)+(ld+1);
            func(k,res,low,high);
        }
    }
    vector<int> sequentialDigits(int low, int high) {
        vector<int>res;
        for(int i=1;i<=9;i++){
            func(i,res,low,high);
        }
        sort(res.begin(),res.end());
        return res;
    }
};