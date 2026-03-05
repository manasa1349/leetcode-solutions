class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        bool chk=0;
        int cz=0,co=0;
        for(int i=0;i<n;i++){
            if(chk+'0'!=s[i]){
                cz++;
            }
            if((!chk+'0')!=s[i]){
                co++;
            }
            chk=!chk;
        }
        return min(cz,co);
    }
};