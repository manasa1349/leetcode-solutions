class Solution {
public:
    int countTrapezoids(vector<vector<int>>& p) {
        int n=p.size();
        const int mod = 1e9 + 7;
        map<int,long long>mp;
        for(int i=0;i<n;i++){
            mp[p[i][1]]++;
        }
        long long sum=0,ans=0;
        for(auto &it:mp){
            long long k=((it.second*(it.second-1))/2)%mod;
            ans+=((sum*k)%mod)%mod;
            sum+=(k)%mod;
        }
        return ans%mod;
    }
};
