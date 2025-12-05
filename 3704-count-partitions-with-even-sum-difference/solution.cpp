class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n);
        pre[0]=nums[0];
        cout<<pre[0]<<" ";
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
            cout<<pre[i]<<" ";
        }
        int ans=0;
        cout<<endl;
        for(int i=0;i<n-1;i++){
            if(abs(pre[i]-(pre[n-1]-pre[i]))%2==0){
                cout<<pre[i]<<" ";
                ans++;
            }
        }
        return ans;
    }
};
