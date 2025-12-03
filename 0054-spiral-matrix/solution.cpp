class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int n=m.size();
        int mm=m[0].size();
        int l=0,t=0;
        int r=mm-1,b=n-1;
        vector<int>ans;
        while(l<=r && t<=b){
            for(int i=l;i<=r;i++){
                ans.push_back(m[t][i]);
            }
            t++;

            for(int i=t;i<=b;i++){
                ans.push_back(m[i][r]);
            }
            r--;

            if(b>=t){
                for(int i=r;i>=l;i--){
                    ans.push_back(m[b][i]);
                }
                b--;
            }
            if(l<=r){
                for(int i=b;i>=t;i--){
                    ans.push_back(m[i][l]);
                }
                l++;
            }
        }
        return ans;
    }
};
