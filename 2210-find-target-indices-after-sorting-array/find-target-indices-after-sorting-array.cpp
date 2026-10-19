class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int l=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int r=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        if (l == nums.size() || nums[l] != target) {
            return {};
        }
        vector<int>ans;
        for(int i=l;i<r;i++){
            ans.push_back(i);
        }
        // bool chk=false;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target){
        //         ans.push_back(i);
        //         chk=true;
        //     }else if(chk){
        //         break;
        //     }
        // }
        return ans;
    }
};