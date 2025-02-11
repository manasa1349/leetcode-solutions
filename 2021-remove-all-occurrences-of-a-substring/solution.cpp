class Solution {
public:
    string removeOccurrences(string s, string part) {
        stack<char>st;
        int n=s.length();
        int m=part.size();
        for(int i=0;i<n;i++){
            st.push(s[i]);
            if(st.size()>=m){
                if(check(st,part,m)){
                    int j=m;
                    while(j--){
                        st.pop();
                    }
                }
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
    bool check(stack<char>stk, string s, int m){
        stack<char>st=stk;
        for(int i=m-1;i>=0;i--){
            if(st.top()!=s[i]){
                return false;
            }
            st.pop();
        }
        return true;
    }
};
