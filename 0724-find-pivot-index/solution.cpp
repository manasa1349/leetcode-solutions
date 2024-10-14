class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int n=a.size();
        vector<int>prefix(n+1,0);
        prefix[0]=a[0];
        for(int i=1;i<n;i++){
            prefix[i]=a[i]+prefix[i-1];
        }
        for(int i=0;i<n;i++){
            int left=(i == 0) ? 0 :prefix[i-1];
            int right=prefix[n-1]-prefix[i];
            if(left==right){
                return i;
            }
        }
        return -1;
    }
};
