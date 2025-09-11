class Solution {
public:
    bool isVowel(char c) {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }
    string sortVowels(string s) {
        int n=s.size();
        vector<char>m;
        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                m.push_back(s[i]);
            }
        }
        sort(m.begin(),m.end());
        int j=0;
        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                s[i]=m[j++];
            }
        }
        return s;
    }
};
