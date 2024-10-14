class Solution {
public:
    int minGroups(vector<vector<int>>& a) {
        int maxx=0;
        for(auto i:a){
            maxx=max(maxx,i[1]);
        }
        vector<int>prefix(maxx+2,0);
        for(int i=0;i<a.size();i++){
            int f=a[i][0];
            int l=a[i][1];
            prefix[f]+=1;
            prefix[l+1]-=1;
        }
        for(int i=1;i<prefix.size();i++){
            prefix[i]=prefix[i]+prefix[i-1];
        }
        return *max_element(prefix.begin(),prefix.end());
    }
};
