class Solution {
public:
    bool check(int k,vector<string>strs){
        for(int i=0;i<strs.size()-1;i++){
            if(strs[i][k]>strs[i+1][k]){
                return false;
            }
        }
        return true;
    }
    int minDeletionSize(vector<string>& strs) {
        int cnt=0;
        for(int i=0;i<strs[0].size();i++){
            cnt+=(check(i,strs))?0:1;
        }
        return cnt;
    }
};
