class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int m=edges.size();
        int n=2*edges.size();
        /*vector<int>li(n,0);
        for(auto i:edges){
            li[i[0]]++;
            li[i[1]]++;
        }*/
        map<int,int>mp;
        for(auto i:edges){
            mp[i[0]]++;
            mp[i[1]]++;
        }
        for(auto i:mp){
            if(i.second==m){
                return i.first;
            }
        }
        return 0;
    }
};
