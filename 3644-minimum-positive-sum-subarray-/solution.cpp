class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        int minsum=INT_MAX;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                int sz=j-i+1;
                sum+=nums[j];
                if(sz>=l && sz<=r && sum>0){
                    minsum=min(sum,minsum);
                }else if(sz>r){
                    break;
                }
            }
            
        }
        if(minsum!=INT_MAX){
            return minsum;
        }else{
            return -1;
        }
    }
};
