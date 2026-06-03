class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(),nums.end(),[](auto &s1,auto &s2){
            if(s1.size()==s2.size()){
                return s1<s2;
            }
            return s1.size()<s2.size();
        });
        int n=nums.size();
        return nums[n-k];
    }
};