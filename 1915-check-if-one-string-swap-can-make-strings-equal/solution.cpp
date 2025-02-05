class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n=s1.length();
        int cnt=0;
        int idx1=0;
        int idx2=0;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                cnt++;
                if(cnt==1){
                    idx1=i;
                }
                if(cnt==2){
                    idx2=i;
                }
                if(cnt>2){
                    return false;
                }
            }
        }
        if(cnt==0) return true;
        if((s1[idx1]==s2[idx2])&&(s1[idx2]==s2[idx1])){
            return true;
        }
        return false;
    }
};
