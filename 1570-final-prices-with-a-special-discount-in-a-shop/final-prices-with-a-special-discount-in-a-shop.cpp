class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        //next smallest(inclu ==) ele 
        stack<int>st;
        int n=prices.size();
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && prices[i]<st.top()){
                st.pop();
            }
            if(st.empty()){
                ans[i]=prices[i];
            }else{
                ans[i]=prices[i]-st.top();
            }
            st.push(prices[i]);
        }
        return ans;
    }
};