class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans="";
        while(num--){
            if(sum==0){
                ans+='0';
            }else if(sum<9){
                ans+=(sum+'0');
                sum=0;
            }else{
                ans+='9';
                sum-=9;
            }
        }
        if(sum!=0) return "";
        return ans;
    }
};