class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        int sum=0;
        bool check=false;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(nums[i]>0){
                check=true;
            }
        }
        for(auto i:mp){
            if(!check){
                sum=i.first;
                // sum=max(sum,k);
            }
            if(i.first>0){
                sum+=i.first;
            }
        }
        return sum;
    }
};
