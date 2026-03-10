class Solution {
public:
    void func(int o,int c,int n,vector<string>&ans,string s){
        //base 2*n size return;
        if(s.size()==2*n){
            ans.push_back(s);
            return;
        } 
        //open
        if(o!=0){
            s+='(';
            func(o-1,c,n,ans,s);
            s.pop_back();
        }
        //close
        if(c!=0 && c>o){
            s+=')';
            func(o,c-1,n,ans,s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        func(n,n,n,ans,s);
        return ans;
    }
};