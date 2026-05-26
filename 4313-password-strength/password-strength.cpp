class Solution {
public:
    int val(char ch){
        if(ch>='a' && ch<='z'){
            return 1;
        }else if(ch>='A' && ch<='Z'){
            return 2;
        }else if(ch>='0' && ch<='9'){
            return 3;
        }else{
            return 5;
        }
    }
    int passwordStrength(string password) {
        unordered_map<char,int>mp;
        int ans=0;
        for(int i=0;i<password.size();i++){
            if(mp.find(password[i])==mp.end()){
                ans+=val(password[i]);
            }
            mp[password[i]]++;
        }
        return ans;
    }
};