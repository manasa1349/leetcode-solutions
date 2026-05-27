class Solution {
public:
    int numberOfSpecialChars(string word) {
        // last lower, first higher
        vector<int>up(26,-1),lo(26,-1);
        for(int i=0;i<word.size();i++){
            if(word[i]>='A' && word[i]<='Z'){
                if(up[word[i]-'A']==-1){
                    up[word[i]-'A']=i;
                }
            }else{
                lo[word[i]-'a']=i;
            }
        }
        int ans=0; 
        for(int i=0;i<26;i++){
            if(up[i]!=-1 && lo[i]!=-1 && up[i]>lo[i]){
                ans++;
            }
        }
        return ans;
    }
};