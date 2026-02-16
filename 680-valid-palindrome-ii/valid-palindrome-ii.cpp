class Solution {
public:
    bool func(int l,int r,string s){
        if(l==r) return true;
        while(l<=r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n=s.size();
        int l=0,r=n-1;
        bool chk=false;
        while(l<=r){
            if(s[l]!=s[r]){
                if(!chk){
                    if(l==r || func(l+1,r,s) || func(l,r-1,s)){
                        return true;
                    }else{
                        return false;
                    }
                    chk=true;
                }else{
                    return false;
                }
            }
            l++;
            r--;
        }
        return true;
    }
};