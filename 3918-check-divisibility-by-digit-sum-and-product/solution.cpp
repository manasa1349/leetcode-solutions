class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pro=1;
        int temp=n;
        if(n<=9){
            return false;
        }
        while(temp){
            int dgt=temp%10;
            sum+=dgt;
            pro*=dgt;
            temp/=10;
        }
        if(n%(sum+pro)==0){
            return true;
        }
        return false;
    }
};
