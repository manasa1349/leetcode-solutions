class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        string sz="",so="";
        bool chk=0;
        for(int i=0;i<n;i++){
            sz+=chk+'0';
            so+=!chk+'0';
            chk=!chk;
        }
        int cz=0,co=0;
        for(int i=0;i<n;i++){
            if(sz[i]!=s[i]){
                cz++;
            }
            if(so[i]!=s[i]){
                co++;
            }
        }
        return min(cz,co);
    }
};