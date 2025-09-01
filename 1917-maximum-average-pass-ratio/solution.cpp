class Solution {
public:
    struct compare {
        bool operator()(const pair<int,int>& c1, const pair<int,int>& c2) {
            double a1=(double)(c1.first+1)/(c1.second+1) -(double)(c1.first)/(c1.second);
            double a2=(double)(c2.first+1)/(c2.second+1) -(double)(c2.first)/(c2.second);
            return a1<a2;
        }
    };
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq;
        int n=classes.size();
        for(int i=0;i<n;i++){
            pq.push({classes[i][0],classes[i][1]});
        }
        while(extraStudents--){
            auto [p,t]=pq.top();
            pq.pop();
            pq.push({p+1,t+1});
        }
        double ans=0.0;
        while(!pq.empty()){
            auto [p,t]=pq.top();
            pq.pop();
            ans+=(double(p)/t);
        }
        return ans/n;
    }
};
