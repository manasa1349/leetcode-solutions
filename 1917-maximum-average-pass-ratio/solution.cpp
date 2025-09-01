class Solution {
public:
    double cmp(int a,int b){
        return (double(a+1)/(b+1))-(double(a)/b);
    }
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<tuple<double,int,int>> pq;
        int n=classes.size();
        for(int i=0;i<n;i++){
            pq.push({cmp(classes[i][0],classes[i][1]),classes[i][0],classes[i][1]});
        }
        while(extraStudents--){
            auto [g,p,t]=pq.top();
            pq.pop();
            pq.push({cmp(p+1,t+1),p+1,t+1});
        }
        double ans=0.0;
        while(!pq.empty()){
            auto [g,p,t]=pq.top();
            pq.pop();
            ans+=(double(p)/t);
        }
        return ans/n;
    }
};
