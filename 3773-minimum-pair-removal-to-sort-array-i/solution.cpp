class Solution {
public:
    bool isSorted(vector<int>arr){
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
                return  false;
            }
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int cnt=0;
        while(!isSorted(nums)){
            int mn=INT_MAX,idx=0;
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]+nums[i+1]<mn){
                    mn=nums[i]+nums[i+1];
                    idx=i;
                }
            }
            nums[idx]=mn;
            nums.erase(nums.begin()+idx+1);
            cnt++;
        }
        return cnt;
    }
};
