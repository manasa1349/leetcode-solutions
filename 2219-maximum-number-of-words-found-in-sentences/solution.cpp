class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        priority_queue<int>pq;
        for(int i=0;i<sentences.size();i++){
            int k=count(sentences[i].begin(),sentences[i].end(),' ');
            pq.push(k);
        }
        return pq.top()+1;
    }
};
