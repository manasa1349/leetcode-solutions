class Solution {
public:
    int longestValidParentheses(string s) {
        long long ans=0;
        long long o=0,c=0,l=0,r=0;

        //lft->rgt
        while(r<s.size()){
            if(s[r]==')'){
                c++;
            }else{
                o++;
            }
            while(c>o){
                l=r+1;
                o=0,c=0;
            }
            if(o==c){
                ans=max(ans,r-l+1);
            }
            r++;
        }

        //rgt->lft
        l=s.size(),r=s.size();
        while(r>=0){
            if(s[r]==')'){
                c++;
            }else{
                o++;
            }
            while(o>c){
                l=r-1;
                o=0,c=0;
            }
            if(o==c){
                ans=max(ans,l-r+1);
            }
            r--;
        }
        return (int)ans;
    }
};