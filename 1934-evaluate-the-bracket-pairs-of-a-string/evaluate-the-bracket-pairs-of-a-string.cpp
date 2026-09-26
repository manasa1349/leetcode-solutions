class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string res="",str="";
        bool chk=false;
        unordered_map<string,string>mp;
        for(auto it:knowledge){
            mp[it[0]]=it[1];
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                chk=true;
                continue;
            }else if(s[i]==')'){
                // auto it = find_if(knowledge.begin(),knowledge.end(), [str](const vector<string>& row) {
                //     return !row.empty() && row[0] == str;
                // });
                // if(it==knowledge.end()){
                //     res+='?';
                // }else{
                //     int idx=distance(knowledge.begin(), it);
                //     res+=knowledge[idx][1];
                // }
                if(mp.find(str)==mp.end()){
                    res+='?';
                }else{
                    res+=mp[str];
                }
                str="";
                chk=false;
                continue;
            }
            if(chk){
                str+=s[i];
            }else{
                res+=s[i];
            }
        }
        return res;
    }
};