class Solution {
public:
    string func(string str){
        string s="";
        int cnt=1,n=str.size();
        for(int i=0;i<n-1;i++){
            if(str[i]==str[i+1]){
                cnt++;
            }else{
                s+=to_string(cnt);
                s+=str[i];
                cnt=1;
            }
        }
        s+=to_string(cnt);
        s+=str[n-1];
        return s;
    }
    string countAndSay(int n) {
        string s="1";
        for(int i=2;i<=n;i++){
            string val=func(s);
            s=val;
        }
        return s;
    }
};