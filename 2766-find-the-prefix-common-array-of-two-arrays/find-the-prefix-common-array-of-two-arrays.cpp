class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            if(mp.find(a[i])!=mp.end()){
                mp.erase(a[i]);
            }else{
                mp[a[i]]++;
            }

            if(mp.find(b[i])!=mp.end()){
                mp.erase(b[i]);
            }else{
                mp[b[i]]++;
            }

            ans.push_back(((2*(i+1))-mp.size())/2);
        }
        return ans;
    }
};