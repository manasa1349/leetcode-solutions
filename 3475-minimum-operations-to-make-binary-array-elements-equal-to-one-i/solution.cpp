class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        /*for(int i=0;i<n-2;i++){
            if(nums[i]==0){
                nums[i]=!nums[i];
                nums[i+1]=!nums[i+1];
                nums[i+2]=!nums[i+2];
                cnt++;
            }
        }
        if(nums[n-2]==0 ||nums[n-1]==0){
            return -1;
        }*/
        int l=0,r=2;
        while(r<n){
            if(nums[l]==0){
                nums[l]=!nums[l];
                nums[l+1]=!nums[l+1];
                nums[l+2]=!nums[l+2];
                cnt++;
            }
            l++;
            r++;
        }
        if(nums[r-1]==0 || nums[r-2]==0){
            return -1;
        }
        return cnt;
    }
};
