class Solution {
public:
    const long long MOD=1e9+7;
    long long fact(long long n){
        if(n==1){
            return 1;
        }
        return n*((fact(n-1))%MOD);
    }
    int countPermutations(vector<int>& complexity) {
        long n=complexity.size();
        for(int i=1;i<n;i++){
            if(complexity[i]<=complexity[0]){
                return 0;
            }
        }
        return (fact(n-1))%MOD;
    }
};
