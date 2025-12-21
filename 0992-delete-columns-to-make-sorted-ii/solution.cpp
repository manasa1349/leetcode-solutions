class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int m=strs[0].size();
        int cnt=0,j;
        int n=strs.size()-1;
        vector<bool>chk(n,false);
        for(int i=0;i<m;i++){
            bool k=false;
            for(j=0;j<n;j++){
                if(!chk[j] && strs[j][i]>strs[j+1][i]){
                    cnt++;
                    k=true;
                    break;
                }
            }
            if(k){
                continue;
            }
            for(j=0;j<n;j++){
                if(!chk[j] && strs[j][i]<strs[j+1][i]){
                    chk[j]=true;
                }
            }
            int m=0;
            for(m=0;m<n;m++){
                if(!chk[m]){
                    break;
                }
            }
            if(m==n){
                break;
            }
        }
        return cnt;

    }
};
