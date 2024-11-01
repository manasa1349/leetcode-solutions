class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        ans+=s[0];
        int cnt=0;
        for(int i=1;i<s.size();i++){
            if(s[i]==ans[ans.size()-1]){
                cnt++;
                if(cnt<2){
                    ans+=s[i];
                }
            }else{
                cnt=0;
                ans+=s[i];
            }
        }
        return ans;
    }
};
