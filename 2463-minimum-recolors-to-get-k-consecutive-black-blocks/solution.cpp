class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int l=0,r=0;
        int cnt=0,ans=INT_MAX;
        while(r<blocks.size()){
            if(blocks[r]=='W'){
                cnt++;
            }
            if(r-l+1==k){
                ans=min(ans,cnt);
                if(blocks[l]=='W'){
                    cnt--;
                }
                l++;
            }
            r++;
        }
        return ans;
    }
};
