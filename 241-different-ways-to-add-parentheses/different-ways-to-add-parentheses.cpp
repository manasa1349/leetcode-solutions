class Solution {
public:
    vector<int> diffWaysToCompute(string s) {
        vector<int>ans;
        //empty
        if(s.empty()) return {};
        //1 digit or 2 digit number since [0, 99]
        if(s.size()==1 || s.size()==2){
            ans.push_back(stoi(s));
            return ans;
        }

        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(isdigit(s[i])) continue;
            vector<int>l,r;
            //left values
            l=diffWaysToCompute(s.substr(0,i));
            //right values
            r=diffWaysToCompute(s.substr(i+1,s.size()));
            for(int lt:l){
                for(int rt:r){
                    if(c=='+') ans.push_back(lt+rt);
                    else if(c=='-') ans.push_back(lt-rt);
                    else if(c=='*') ans.push_back(lt*rt);
                }
            }
        }
        return ans;
    }
    // 2 * 3 - 4 * 5              here l=2   r=-5,-17    so for * we do 2*-5, 2*-17
    // (2)    *    (3-4*5)           
    // (2)  (3-4)*(5) or (3)-(4*5)  
    //  2   -1*5         3-20
    //  2    -5           -17
};