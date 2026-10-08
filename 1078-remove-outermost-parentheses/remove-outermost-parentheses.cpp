class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                if(st.size()>1){
                    res+=s[i];
                }
            }else{
                st.pop();
                if(!st.empty()){
                    res+=s[i];
                }
            }
        }
        return res;
    }
};