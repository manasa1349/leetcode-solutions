class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k) return false;
        map<int,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]-'0']++;
        }
        int cnt=0;
        for(auto it:mp){
            if(it.second%2!=0) cnt++;
        }
        if(cnt>k){
            return false;
        }
        return true;
    }
};
