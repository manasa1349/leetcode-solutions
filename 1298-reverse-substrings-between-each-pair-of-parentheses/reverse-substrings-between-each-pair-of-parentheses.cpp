class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                string str="";
                while(!st.empty() && st.top()!='('){
                    str+=st.top();
                    st.pop();
                }
                st.pop();//(
                for(auto i:str){
                    st.push(i);
                }
            }else{
                st.push(s[i]);
            }
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};