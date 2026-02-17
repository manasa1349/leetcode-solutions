class Solution {
public:
    vector<string> readBinaryWatch(int n) {
        vector<string>ans;
        for(int i=0;i<12;i++){//hours
            for(int j=0;j<60;j++){//minutes
                if(__builtin_popcount(i)+__builtin_popcount(j) == n){
                    string s=to_string(i)+":"+(j<10?"0":"")+to_string(j);
                    ans.push_back(s);
                }
            }
        }
        return ans;
    }
};