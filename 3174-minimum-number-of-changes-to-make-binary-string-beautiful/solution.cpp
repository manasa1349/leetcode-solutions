class Solution {
public:
    int minChanges(string s) {
        int adjone=0;
        int adjzero=0;
        int ans=0;
        // for(int i=0;i<s.size()-1;i++){
        //     if(s[i]=='1' && s[i+1]=='1'){
        //         adjone++;
        //     }
        //     if(s[i]=='0' && s[i+1]=='0'){
        //         adjzero++;
        //     }
        //     if(s[i]=='1' && s[i+1]=='0'){
        //         if(adjone%2!=0){
        //             ans++;
        //             i++;
        //         }
        //         adjone=0;
        //     }
        //     if(s[i]=='0' && s[i+1]=='1'){
        //         if(adjzero%2!=0){
        //             ans++;
        //             i++;
        //         }
        //         adjzero=0;
        //     }    
        // }
        // cout<<adjone<<" "<<adjzero;
        for(int i=0;i<s.size();i+=2){
            if(s[i]!=s[i+1]) ans++;
        }
        return ans;
    }
};
