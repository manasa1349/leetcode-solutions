class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int ans=0,cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                ans=max(ans,cnt);
                while(!st.empty() && st.top()!='('){
                    st.pop();
                }
                st.pop();
                cnt--;
            }else{
                if(s[i]=='(') cnt++;
                st.push(s[i]);
            }
        }
        return ans;
    }
};