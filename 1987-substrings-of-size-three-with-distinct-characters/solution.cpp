class Solution {
public:
    int countGoodSubstrings(string s) {
        int l=0,r=0;
        int cnt=0;
        while(r<s.size()){
            if(r-l+1==3){
                if(s[l]!=s[l+1] && s[l+1]!=s[r] && s[l]!=s[r]){
                    cnt++;
                    cout<<s[l]<<" "<<s[l+1]<<" "<<s[r]<<endl;
                }
                l++;
            }
            r++;
        }
        return cnt;
    }
};
