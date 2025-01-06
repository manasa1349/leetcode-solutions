class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>pre(n);
        pre[0]=boxes[0]-'0';
        for(int i=1;i<n;i++){
            pre[i]=(boxes[i]-'0')+pre[i-1];
        }
        vector<int> answer(n, 0);
        for (int i = 0; i < n; i++) {
            int operations = 0;
            for (int j = 0; j < n; j++) {
                if (boxes[j] == '1') {
                    operations += abs(j - i);
                }
            }
            answer[i] = operations;
        }
        return answer;
    }
};
