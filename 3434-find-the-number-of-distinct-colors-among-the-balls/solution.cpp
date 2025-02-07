class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& query) {
        map<int,int>mp;
        map<int,int>col;
        vector<int>res;
        for(int i=0;i<query.size();i++){
            int b=query[i][0];
            int c=query[i][1];
            if(mp.find(b)!=mp.end()){
                col[mp[b]]--;
                if(col[mp[b]]==0) col.erase(mp[b]);
            }
            mp[b]=c;
            col[c]++;
            res.push_back(col.size());
        }
        return res;
    }
};
