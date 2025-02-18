class Solution {
public:
    string smallestNumber(string pattern) {
        string res;
        int n=pattern.size();
        stack<int>st;
        for(int i=0;i<=n;i++){
            st.push(i+1);
            if(pattern[i]=='I' || i==n){
                while(!st.empty()){
                    res+=to_string(st.top());
                    st.pop();
                }
            }
        }
        return res;
    }
};
