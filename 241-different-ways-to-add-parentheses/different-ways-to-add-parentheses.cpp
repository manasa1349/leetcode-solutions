class Solution {
public:
    vector<int> diffWaysToCompute(string s) {
        vector<int>ans;
        if(s.empty()) return {};
        if(s.size()==1 || s.size()==2){
            ans.push_back(stoi(s));
            return ans;
        }
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(isdigit(s[i])) continue;
            vector<int>l,r;
            l=diffWaysToCompute(s.substr(0,i));
            r=diffWaysToCompute(s.substr(i+1,s.size()));
            for(int lt:l){
                for(int rt:r){
                    if(c=='+') ans.push_back(lt+rt);
                    if(c=='-') ans.push_back(lt-rt);
                    if(c=='*') ans.push_back(lt*rt);
                }
            }
        }
        return ans;
    }
};