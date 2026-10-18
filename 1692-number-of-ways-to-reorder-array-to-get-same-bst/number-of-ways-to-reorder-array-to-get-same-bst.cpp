class Solution {
public:
    vector<vector<long long>>arr;
    const long long MOD=1e9+7;
    long long func(vector<int>&nums){
        vector<int>l,r;
        int n=nums.size();
        if(n<=2) return 1;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[0]){
                l.push_back(nums[i]);
            }else{
                r.push_back(nums[i]);
            }
        }
        int lsz=l.size(),rsz=r.size();
        long long ans=arr[lsz+rsz][lsz];
        ans=(ans*func(l))%MOD;
        ans=(ans*func(r))%MOD;
        return ans;
    }
    int numOfWays(vector<int>& nums) {
        int n=nums.size();
        arr.assign(n,vector<long long>(n,0));
        for(int i=0;i<n;i++){
            arr[i][0]=arr[i][i]=1;
            for(int j=1;j<i;j++){
                arr[i][j]=(arr[i-1][j]+arr[i-1][j-1])%MOD;
            }
        }
        return (func(nums)-1)%MOD;
    }
};