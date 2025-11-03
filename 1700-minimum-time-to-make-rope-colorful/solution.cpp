class Solution {
public:
    int minCost(string c, vector<int>& t) {
        int ans=0;
        for(int i=1;i<c.size();i++){
            if(c[i-1]==c[i]){
                ans+=t[i]<t[i-1]?t[i]:t[i-1];
                t[i]=t[i]>t[i-1]?t[i]:t[i-1];
            }
        }
        return ans;
    }
};
