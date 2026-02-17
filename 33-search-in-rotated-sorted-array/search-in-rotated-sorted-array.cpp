class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int n=nums.size();
        int l=0,h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]>=nums[l]){//left sorted
                if(nums[mid]==tar){
                    return mid;
                }else if(tar<nums[mid] && tar>=nums[l]){//left
                    h=mid-1;
                }else{//right
                    l=mid+1;
                }
            }else if(nums[mid]<=nums[h]){//right sorteed
                if(nums[mid]==tar){
                    return mid;
                }else if(tar<=nums[h] && tar>nums[mid]){//right
                    l=mid+1;
                }else{//left
                    h=mid-1;
                }
            }
            
        }
        return -1;
    }
};