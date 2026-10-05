class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<string>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('){
                st.push("(");
            }else{
                if(st.top()=="(") {
                    st.pop();
                    st.push("1");
                }else{
                    int sum=0;
                    while(!st.empty()&&st.top()!="("){
                        sum+=stoi(st.top());
                        st.pop();
                    }
                    st.pop();
                    st.push(to_string(2*sum));
                }
            }
        }
        int res=0;
        while(!st.empty()){
            res+=stoi(st.top());
            st.pop();
        }
        return res;
    }
};