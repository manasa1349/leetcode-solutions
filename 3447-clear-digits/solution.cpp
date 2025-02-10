class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                st.push(s[i]);
            }else if(isdigit(s[i]) && !st.empty()){
                st.pop();
            }
        }
        string res="";
        if(st.empty()) return "";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
