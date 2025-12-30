class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int ans=0;
        int cnt=0;
        int l=0,r=k;
        for(int i=l;i<r;i++){
            if(isvowel(s[i])){
                cnt++;
            }
        }
        ans=cnt;
        while(r<s.size()){
            if(isvowel(s[l])){
                cnt--;
            }
            if(isvowel(s[r])){
                cnt++;
            }
            ans=max(ans,cnt);
            r++;
            l++;
        }
        return ans;
    }
};
