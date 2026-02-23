class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_map<string,int>mp;
        int val=pow(2,k);
        for(int i=0;i<=(int)s.size()-k;i++){
            mp[s.substr(i,k)]++;
            if(mp.size()>=val) break;
        }
        return mp.size()==val;
    }
};