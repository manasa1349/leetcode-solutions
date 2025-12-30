class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int j=0,cnt=0;
        int n=s.size();
        for(int i=0;i<g.size();i++){
            while(j<n && g[i]>s[j]){
                j++;
            }
            if(j<n && g[i]<=s[j]){
                cnt++;
                j++;
            }
        }
        return cnt;
    }
};
