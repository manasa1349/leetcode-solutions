class Solution {
public:
    // Dijkstra Algo
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>adj(n+1);
        for(int i=0;i<times.size();i++){
            int u=times[i][0],v=times[i][1],w=times[i][2];
            adj[u].push_back({v,w});
        }

                    //time/dist, node
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> >pq;
        vector<int>dist(n+1,INT_MAX);

        pq.push({0,k});
        dist[k]=0;

        while(!pq.empty()){
            int tm=pq.top().first;
            int node=pq.top().second;
            pq.pop();

            if(tm > dist[node]) continue;

            for(auto it:adj[node]){
                int node2=it.first;
                int time=it.second;
                if(dist[node]+time < dist[node2]){
                    dist[node2]=dist[node]+time;
                    pq.push({dist[node2],node2});
                }
            }
        }
        int ans=INT_MIN;
        for(int i=1;i<=n;i++){
            if(dist[i]==INT_MAX) return -1;
            //the last node receives it → maximum of those shortest distances
            ans=max(dist[i],ans);
        }
        return ans;
    }
};