class Solution {
public:
    int minStartValue(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        int minn=*min_element(nums.begin(),nums.end());
        if(minn>0){
            return 1;
        }else{
            return abs(minn)+1;
        }
    }
    // -3  2  -3  4  2
    // -3 -1  -4  0  2
    //1   -2  -3
    //1   -1  -4
};
