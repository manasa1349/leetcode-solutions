class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        // for every i 
        //left smallest/right smallest idx diff is used for b in l*b
        stack<int>st;
        int n=h.size(),ans=0;
        for(int i=0;i<=n;i++){
            while(!st.empty() && (i==n || h[st.top()]>=h[i])){
                int height=h[st.top()];
                st.pop();
                int left=st.empty()?-1:st.top();
                int width=i-left-1;
                ans=max(ans,height*width);
            }
            st.push(i);
        }
        return ans;
    }
};