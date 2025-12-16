class Solution {
public:
    string getSmallestString(string s, int k) {
        for(int i=0;i<s.size();i++){
            int d=s[i]-'a';
            int mind=min(d,26-d);
            if(mind<=k){
                k-=mind;
                s[i]='a';
            }else{
                // if(d<=13){
                //     s[i]=char(s[i]-k);
                // }else{
                //     s[i]=char(s[i]-k);
                // }
                s[i]=char(s[i]-k);
                return s;
            }
        }
        return s;
    }
};
