class Solution {
public:
    int reverseBits(int n) {
        vector<int>arr(32,0);
        long long cnt=0,ans=0;
        while(n){
            int val=n%2;
            cnt++;
            if(val==1){
                arr[32-cnt]=1;
            }
            n/=2;
        }
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]==1){
                ans+=pow(2,i);
            }
        }
        return int(ans);
    }
};
