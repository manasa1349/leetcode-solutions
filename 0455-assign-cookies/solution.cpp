class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int j=0,i=0,cnt=0;
        int n=s.size();
        int n1=g.size();
        // for(int i=0;i<g.size();i++){
        while(j<n && i<n1){
            if(g[i]<=s[j]){
                cnt++;
                i++;
            }
            j++;
        }
            
        // }
        return cnt;
    }
};
