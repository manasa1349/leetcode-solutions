class Solution {
public:
    bool check(string s){
        int n=s.size();
        if(s[0]=='a' || s[0]=='e' ||s[0]=='i'||s[0]=='o'||s[0]=='u'){
            if(s[n-1]=='a' || s[n-1]=='e' ||s[n-1]=='i'||s[n-1]=='o'||s[n-1]=='u'){
                return true;
            }
        }
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        vector<int>pre(n,0);
        int k=0;
        if(check(words[0])){
            pre[k]=1;
        }else{
            pre[k]=0;
        }
        k++;
        for(int i=1;i<words.size();i++){
            if(check(words[i])){
                pre[k]=pre[k-1]+1;
            }
            else{
                pre[k]=pre[k-1];
            }
            k++;
        }
        vector<int>res(queries.size());
        int j=0;
        for(int i=0;i<queries.size();i++){
            int l=queries[i][0];
            int r=queries[i][1];
            if(l!=0){
                res[j]=pre[r]-pre[l-1];
            }else{
                res[j]=pre[r];
            }
            j++;
        }
        for(int i=0;i<k;i++){
            cout<<pre[i]<<"  ";
        }
        return res;
    }
};
