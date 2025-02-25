class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int cnt=0,pre=0,odd=0,eve=1;
        for(int n:arr){
            pre+=n;
            if(pre%2==0){
                cnt+=odd;
                eve++;
            }else{
                odd++;
                cnt+=eve;
            }
            cnt%=int(1e9+7);
        }
        return cnt;
    }
};
