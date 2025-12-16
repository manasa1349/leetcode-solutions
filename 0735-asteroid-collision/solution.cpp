class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        stack<int>st;
        // st.push(0);
        int n=arr.size();
        for(int i=0;i<n;i++){
            bool chk=false;
            while(!st.empty() && st.top()>0 && arr[i]<0 ){
                if(-arr[i]>st.top()){
                    st.pop();
                    continue;
                }else if(-arr[i]==st.top()){
                    st.pop();
                }
                chk=true;
                break;
            }
            if(!chk){
                st.push(arr[i]);
            }
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
