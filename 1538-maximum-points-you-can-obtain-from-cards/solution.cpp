class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        int lsum=0,rsum=0;
        int mx=0;
        for(int i=0;i<k;i++){
            lsum+=a[i];
        }
        mx=lsum;
        int j=a.size()-1;
        for(int i=k-1;i>=0;i--){
            lsum-=a[i];
            rsum+=a[j--];
            mx=max(mx,lsum+rsum);
        }
        return mx;
    }
};
