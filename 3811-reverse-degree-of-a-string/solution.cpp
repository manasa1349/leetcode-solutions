class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int>mp;
        int k=26;
        for(char i='a';i<='z';i++){
            mp[i]=k;
            k--;
        }
        int ans=0;
        for(int i=0;i<s.size();i++){
            ans+=(i+1)*mp[s[i]];
        }
        return ans;
    }
};
