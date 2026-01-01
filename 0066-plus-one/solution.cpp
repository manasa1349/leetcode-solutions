class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int i=n-1;
        while(i>=0 && digits[i]==9){
            digits[i]=0;
            i--;
        }
        if(i!=-1){
            digits[i]=digits[i]+1;
            return digits;
        }else{
            vector<int>ans(n+1,0);
            ans[0]=1;
            return ans;
        }
        return {};
    }
};
