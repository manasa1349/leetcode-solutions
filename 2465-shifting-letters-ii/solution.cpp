class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        long long n=s.size();
        vector<long long>pre(n+1,0);
        long long m=shifts.size();
        string res="";
        for(long long i=0;i<m;i++){
            long long l=shifts[i][0];
            long long r=shifts[i][1];
            long long chng=(shifts[i][2]==1)?1:-1;
            pre[l]+=chng;
            pre[r+1]-=chng;
        }
        int curr=0;
        for(int i=1;i<n;i++){
            pre[i]+=pre[i-1];
        }
        for(long long i=0;i<n;i++){
            int net=(pre[i]%26+26)%26;
            res+='a'+((s[i]-'a'+net)%26);
        }
        return res;
    }
};
