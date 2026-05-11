class Solution {
public:
    vector<int>ans;
    void func(int n){
        if(n<=0) return;
        func(n/10);
        ans.push_back(n%10);
    }
    vector<int> separateDigits(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            func(nums[i]);
        }
        return ans;
    }
};