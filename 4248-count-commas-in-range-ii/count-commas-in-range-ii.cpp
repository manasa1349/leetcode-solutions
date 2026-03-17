class Solution {
public:
    long long countCommas(long long n) {
        if(n<1e3){
            return 0;
        }
        else if(n<1e6){
            return n-999;
        }
        else if(n<1e9){
            long long ans=(n-999999)+(n-999);
            return ans;
        }
        else if(n<1e12){
            long long ans=(n-999999999)+(n-999999)+(n-999);
            return ans;
        }
        else if(n<1e15){
            long long ans=(n-999999999999)+(n-999999999)+(n-999999)+(n-999);
            return ans;
        }
        else{
            long long ans=(n-999999999999)+(n-999999999)+(n-999999)+(n-999)+1;
            return ans;
        }
        return 0;
    }
};