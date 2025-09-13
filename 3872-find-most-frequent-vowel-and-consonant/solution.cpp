class Solution {
public:
    bool vowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }
    int maxFreqSum(string s) {
        int vmx=0,cmx=0;
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
            if(vowel(s[i])){
                vmx=max(vmx,freq[s[i]-'a']);
            }else{
                cmx=max(cmx,freq[s[i]-'a']);
            }
        }
        return cmx+vmx;
    }
};
