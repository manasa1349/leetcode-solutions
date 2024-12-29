class Solution {
public:
    bool isPalindrome(string s) {
        string li="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                li+=(tolower(s[i]));
            }
        }
        int m=li.size();
        for(int i=0;i<m/2;i++){
            if(li[i]!=li[m-i-1]){
                cout<<li[i]<<" "<<li[m-i-1]<<endl;
                return false;
            }
        }
        return true;
    }
};
