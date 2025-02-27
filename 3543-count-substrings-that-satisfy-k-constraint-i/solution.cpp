class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int cnt=0;
        int cntone=0,cntzero=0;
        int l=0,r=0;
        while(r<s.size()){
            if(s[r]=='1') cntone++;
            else cntzero++;
            while(cntone>k && cntzero>k){
                if(s[l]=='0') cntzero--;
                else cntone--;
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
};
