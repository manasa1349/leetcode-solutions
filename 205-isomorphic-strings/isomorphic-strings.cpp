class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>st,ts;
        for(int i=0;i<s.size();i++){
            if(st.find(s[i])!=st.end() && t[i]!=st[s[i]]){
                return false;
            }
            if(ts.find(t[i])!=ts.end() && s[i]!=ts[t[i]]){
                return false;
            }
            st[s[i]]=t[i];
            ts[t[i]]=s[i];
        }
        return true;
    }
};