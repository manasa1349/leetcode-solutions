class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool>v(1e6+1,true);
        v[0]=v[1]=false;
        for(int i=2;i*i<v.size();i++){
            if(v[i]){
                for(int j=i*i;j<v.size();j+=i){
                    v[j]=false;
                }
            }
        }
        vector<int>prime;
        for(int i=left;i<=right;i++){
            if(v[i]){
                prime.push_back(i);
            }
        }
        int diff=INT_MAX;
        int p1=0,p2=0;
        if(prime.size()<2){
            return {-1,-1};
        }
        for(int i=1;i<prime.size();i++){
            if(prime[i]-prime[i-1]<diff){
                diff=prime[i]-prime[i-1];
                p1=prime[i-1];
                p2=prime[i];
            }
        }
        return {p1,p2};
    }
};
