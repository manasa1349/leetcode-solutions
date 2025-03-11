class Solution {
public:
    int mins(int a,int b,int c){
        if(a<b){
            if(a<c){
                return a;
            }else{
                return c;
            }
        }else{
            if(b<c){
                return b;
            }else{
                return c;
            }
        }
    }
    int numberOfSubstrings(string s) {
        vector<int>freq(3,-1);
        int l=0,r=0;
        int cnt=0;
        while(r<s.size()){
            freq[s[r]-'a']=r;
            if(freq[0]!=-1 && freq[1]!=-1 && freq[2]!=-1){
                cnt+=(1+mins(freq[0],freq[1],freq[2]));
            }
            r++;
        }
        return cnt;
    }
};
