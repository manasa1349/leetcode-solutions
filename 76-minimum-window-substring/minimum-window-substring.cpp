class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>tmp,mp;
        if(t.size()<1) return "";
        for(int i=0;i<t.size();i++){
            tmp[t[i]]++;
        }
        int need_letters=tmp.size();
        int have_letters=0;
        int l=0,r=0,n=s.size();
        int start=0,len=INT_MAX;
        while(r<n){
            mp[s[r]]++;
            if(tmp.count(s[r]) && mp[s[r]]==tmp[s[r]]){
                have_letters++;
            }
            while(need_letters==have_letters){
                if(r-l+1 < len){
                    start=l;
                    len=r-l+1;
                }
                mp[s[l]]--;
                if(tmp.count(s[l]) && mp[s[l]]<tmp[s[l]]){
                    have_letters--;
                }
                l++;
            }
            r++;
        }
        return len==INT_MAX?"":s.substr(start,len);
    }
};