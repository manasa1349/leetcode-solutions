class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        deque<int>dq;
        int n=arr.size();
        vector<int>ans;
        int j=0;
        for(int i=0;i<n;i++){
            while(!dq.empty() && arr[i]>dq.back()){
                dq.pop_back();
            }
            dq.push_back(arr[i]);
            if(i-j+1==k){
                ans.push_back(dq.front());
                if(dq.front()==arr[j]){
                    dq.pop_front();
                }
                j++;
            }
        }
        return ans;
    }
};