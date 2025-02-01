class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            int n1=nums[i];
            int n2=nums[i+1];
            if((n1%2)==(n2%2)){
                return false;
            }
        }
        return true;
    }
};
