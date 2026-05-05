class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int l=0,r=n-1;
        while(l<r){
            int val=numbers[l]+numbers[r];
            if(val>target){
                r--;
            }else if(val<target){
                l++;
            }else{
                return {l+1,r+1};
            }
        }
        return {-1,-1};
    }
};