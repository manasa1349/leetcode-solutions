class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        if(k==0){
            return nums;
        }
        vector<int>arr;
        vector<int>idx;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                idx.push_back(i);   
                arr.push_back(nums[i]);
            }
        }
        if(arr.size()==0){
            return nums;
        }
        int nk=(k%arr.size());
        rotate(arr.begin(),arr.begin()+nk,arr.end());
        for(int i=0;i<idx.size();i++){
            nums[idx[i]]=arr[i];
        }
        return nums;
    }
};
