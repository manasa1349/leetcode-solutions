class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>a(n);
        int idx=0;
        for(int i=1;i<=n/2;i++){
            a[idx++]=i;
            a[idx++]=-i;
        }
        if(n%2!=0){
            a[idx]=0;
        }
        return a;
    }
};
