class Solution {
public:
    string processStr(string s) {
        string res;
        res.reserve(s.size());
        for(auto i:s){
            if(i=='*'){
                if(!res.empty())res.pop_back();
            }else if(i=='#'){
                res+=res;
            }else if(i=='%'){
                reverse(res.begin(),res.end());
            }else{
                res+=i;
            }
        }
        return res;
    }
};