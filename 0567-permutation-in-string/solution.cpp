class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int>mp;
        for(int i=0;i<s1.size();i++){
            mp[s1[i]]++;
        }
        map<char,int>chk;
        int l=-1;
        for(int i=0;i<s2.size();i++){
            if(mp.find(s2[i])!=mp.end()){
                l=i;
                break;
            }
        }
        if(l==-1) return false;
        int r=l;
        while(r<s2.size()){
            chk[s2[r]]++;
            while(chk[s2[r]]>mp[s2[r]] && l<=r){
                chk[s2[l]]--;
                if(chk[s2[l]]==0){
                    chk.erase(s2[l]);
                }
                l++;
            }
            r++;
            if(mp.size()==chk.size()){
                bool var=true;
                for(auto i:chk){
                    if(mp.find(i.first)!=mp.end() && mp[i.first]!=i.second){
                        var=false;
                        break;
                    }
                    cout<<i.first<<i.second<<chk[i.first]<<endl;
                }
                if(var) return true;
            }
        }
        return false;
    }
};
