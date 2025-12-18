class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        int cnt=0;
        while(q.size()>1){
            int m=q.front();
            cnt++;
            if(cnt==k){
                q.pop();
                cnt=0;
            }else{
                q.pop();
                q.push(m);
            }
        }
        return q.front();
    }
};
