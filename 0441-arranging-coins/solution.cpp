class Solution {
public:
    int arrangeCoins(int n) {
        int l=0,h=n;
        while(l<=h){
            long long m=(l+h)/2;
            if(n>=(m*(m+1))/2){
                l=m+1;
            }else{
                h=m-1;
            }
        }
        return l-1;
    }
};
