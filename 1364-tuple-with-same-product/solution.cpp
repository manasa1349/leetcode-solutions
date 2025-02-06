class Solution {
public:
    int func(int n){
        return (n*(n-1));
    }
    int tupleSameProduct(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int pro=nums[i]*nums[j];
                mp[pro]++;
            }
        }
        int ans=0;
        for(auto it:mp){
            //cout<<it.first<<" "<<it.second<<" "<<ans<<endl;
            if(it.second>1){
                ans+=(func(it.second)*4);
            }
        }
        return ans;
    }
};
