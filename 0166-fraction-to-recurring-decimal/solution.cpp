class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        long long n=(numerator);
        long long d=denominator;
        string res="";
        if(n==0) return "0";
        if((n<0)^(d<0))res+="-";
        n=llabs(n);
        d=llabs(d);
        long long rem=n%d;
        res+=to_string(n/d);
        if(n%d==0){
            return res;
        }
        res+='.';
        unordered_map<long long,int>mp;
        while(rem!=0){
            if(mp.count(rem)){
                res.insert(mp[rem],"(");
                res+=")";
                break;
            }
            mp[rem]=res.size();
            rem*=10;
            res+=to_string(rem/d);
            rem%=d;
        }
        return res;
    }
};
