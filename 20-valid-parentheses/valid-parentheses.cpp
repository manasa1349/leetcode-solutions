class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto i:s){
            if(i==')' || i=='}' || i==']'){
                if(st.empty()) return false;
                if((i==')' && st.top()!='(') || (i=='}' && st.top()!='{') || 
                (i==']' && st.top()!='[')){
                    return false;
                }
                st.pop();
            }else{
                st.push(i);
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};