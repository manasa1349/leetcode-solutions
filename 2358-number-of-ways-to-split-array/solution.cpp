class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        vector<long long>pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]+=(nums[i]+pre[i-1]);
        }
        int res=0;
        for(int i=0;i<n-1;i++){
            long long l=pre[i];
            long long r=pre[n-1]-pre[i];
            if(l>=r){
                res++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<pre[i]<<" ";
        }
        return res;
    }
};
