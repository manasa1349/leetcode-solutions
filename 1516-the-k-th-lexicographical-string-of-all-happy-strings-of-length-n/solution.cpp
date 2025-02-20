class Solution {
public:
    vector<string>res;
    void func(string s,int n){
        if(s.size()==n){
            res.push_back(s);
            return;
        }
        int l=s.size()-1;
        if(s[l]=='a'){
            func(s+'b',n);
            func(s+'c',n);
        }
        else if(s[l]=='b'){
            func(s+'c',n);
            func(s+'a',n);
        }else if(s[l]=='c'){
            func(s+'a',n);
            func(s+'b',n);
        }
    }
    string getHappyString(int n, int k) {
        func("a",n);
        func("b",n);
        func("c",n);
        sort(res.begin(),res.end());
        if(res.size()>=k){
            return res[k-1];
        }
        return "";
    }
};
