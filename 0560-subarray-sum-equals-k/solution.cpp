class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        mpp[0]++;
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int need=x-k;
            if(mpp.find(need)!=mpp.end()){
                cnt=cnt+mpp[need];
            }
            mpp[x]++;
        }
        return cnt;
    }
};
