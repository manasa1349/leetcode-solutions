class Solution {
public:
    vector<bool>isPrime;
    bool prime(int n){
        if(n<=1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int check(vector<int>arr,int l){
        int n=arr.size();
        int ans=0,curr=0;
        for(int i=0;i<n;i++){
            curr+=arr[i];
            if(curr>l){
                break;
            }
            if(isPrime[curr]){
                ans=curr;
            }
        }
        return ans;
    }
    int largestPrime(int n) {
        isPrime.assign(n + 1, true);
        if(n >= 0) isPrime[0] = false;
        if(n >= 1) isPrime[1] = false;

        for(int i = 2; i * i <= n; i++){
            if(isPrime[i]){
                for(int j = i * i; j <= n; j += i){
                    isPrime[j] = false;
                }
            }
        }
        vector<int> primes;
        for(int i=2;i<=n;i++){
            if(isPrime[i]){
                primes.push_back(i);
            }
        }
        int ans=check(primes,n);
        return ans;
    }
};
