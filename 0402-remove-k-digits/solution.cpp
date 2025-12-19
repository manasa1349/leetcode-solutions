class Solution {
public:
    string removeKdigits(string s, int k) {
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && k>0 && st.top()>s[i]){
                st.pop();
                k--;
            }
            st.push(s[i]);
        }
        string ans;
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int i=0;
        while (i < ans.size() && ans[i] == '0') i++;
        ans = ans.substr(i);

        return (ans!="")?ans:"0";
    }
};
