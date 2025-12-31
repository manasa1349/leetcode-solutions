class Solution {
public:
    bool vowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    
    int beautifulSubstrings(string s, int k) {
        unordered_map<long long,unordered_map<long long,long long>>mp;
        mp[0][0]=1;
        long long ans=0,vc=0,cn=0,cnt=0;
        for(int i=0;i<s.size();i++){
            if(vowel(s[i])){
                vc++;
            }else{
                cn++;
            }
            long long pre=vc-cn;
            for(auto &[vcnt,cnt]:mp[pre]){
                if((vcnt%k-vc)*(vcnt%k-vc)%k==0){
                    ans+=cnt;
                }
            }
            mp[pre][vc%k]++;
        }
        return ans;
    }
};
