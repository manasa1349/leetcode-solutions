class Solution {
public:
    int maxNumberOfBalloons(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b') mp['b']++;
            else if(s[i]=='a') mp['a']++;
            else if(s[i]=='l') mp['l']++;
            else if(s[i]=='o') mp['o']++;
            else if(s[i]=='n') mp['n']++;
        }
        if(mp.size()<5) return 0;
        int ans=INT_MAX;
        for(auto i:mp){
            if(i.first=='l' || i.first=='o'){
                if(i.second<2) return 0;
                ans=min(ans,i.second/2);
            }else{
                ans=min(ans,i.second);
            }
        }
        return ans;
    }
};