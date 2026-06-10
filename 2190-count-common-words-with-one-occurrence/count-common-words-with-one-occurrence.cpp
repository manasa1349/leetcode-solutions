class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp1;
        unordered_map<string,int>mp2;
        for(int i=0;i<words1.size();i++){
            mp1[words1[i]]++;
        }
        for(int i=0;i<words2.size();i++){
            if(mp1[words2[i]]){
                mp2[words2[i]]++;
            }
        }
        int cnt=0;
        for(auto i:mp1){
            if(i.second==1 && mp2[i.first]==1){
                cnt++;
            }
        }
        return cnt;
    }
};