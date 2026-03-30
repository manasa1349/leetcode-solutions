class Solution {
public:
    bool checkStrings(string s1, string s2) {
        unordered_map<int,int>odd1,eve1,odd2,eve2;
        int n=s1.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                eve1[s1[i]]++;
                eve2[s2[i]]++;
            }else{
                odd1[s1[i]]++;
                odd2[s2[i]]++;
            }
        }
        return eve1==eve2 && odd1==odd2;
    }
};