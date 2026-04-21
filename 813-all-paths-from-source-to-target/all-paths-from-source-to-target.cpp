class Solution {
public:
    void func(vector<vector<int>>&ans,vector<int>&ds,int n,int node,vector<vector<int>>graph){
        if(node==n-1){
            ans.push_back(ds);
            return;
        }
        for(int j=0;j<graph[node].size();j++){
            ds.push_back(graph[node][j]);
            func(ans,ds,n,graph[node][j],graph);
            ds.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>>ans;
        vector<int>ds;
        ds.push_back(0);
        func(ans,ds,n,0,graph);
        return ans;
    }
};