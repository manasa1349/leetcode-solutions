class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        auto cmp=[](auto &s1,auto &s2){
            if(s1.size()==s2.size()){
                return s1<s2;
            }
            return s1.size()<s2.size();
        };
        int n=nums.size();
        nth_element(nums.begin(),nums.end()-k,nums.end(),cmp);
        return nums[nums.size()-k];
    }
};