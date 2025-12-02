class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        int n=queries.size();
        vector<int>p(m);
        vector<int>ans;
        for(int i=0;i<m;i++){
            p[i]=i+1;
        }
        for(int i=0;i<n;i++){
            int k=queries[i];
            auto it=find(p.begin(),p.end(),k);
            int ind=it-p.begin();
            ans.push_back(ind);
            p.erase(p.begin()+ind);
            p.insert(p.begin(),k);
        }
        return ans;
    }
};
