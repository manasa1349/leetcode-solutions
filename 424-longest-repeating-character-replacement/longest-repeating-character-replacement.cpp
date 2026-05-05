class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0;
        map<char,int>mp;
        int ans=0,maxfreq=0;
        int n=s.size();
        while(r<n){
            mp[s[r]]++;
            maxfreq=max(maxfreq,mp[s[r]]);
            while((r-l+1)-maxfreq>k){
                maxfreq=max(maxfreq,mp[s[l]]);
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};