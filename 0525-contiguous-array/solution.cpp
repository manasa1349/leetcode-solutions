class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                sum--;
            }else{
                sum++;
            }
            mp[sum].push_back(i);
        }
        int ans=0;
        for(auto i:mp){
            vector<int>arr=i.second;
            if(i.first!=0){
                sort(arr.begin(),arr.end());
                int val=max(ans,arr.back()-arr.front());
                ans=max(ans,val);
            }else{
                int val=*max_element(arr.begin(),arr.end());
                ans=max(ans,val+1);
            }
        }
        return ans;
    }
};
