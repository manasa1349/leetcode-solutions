class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
        long long n=queries.size();
        priority_queue<int>list;
        vector<int>res;
        for(long long i=0;i<n;i++){
            long long sum=0;
            sum=abs(queries[i][0])+abs(queries[i][1]);
            list.push(sum);
            if(list.size()>k){
                list.pop();
            }
            if(list.size()<k){
                res.push_back(-1);
            }else{
                res.push_back(list.top());
            }
        }
        return res;
    }
};
