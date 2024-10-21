class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i,j;
        for(i=0;i<nums.size()-1;i++){
            for(j=i+1;(j<nums.size() && j<=i+k);j++){
                if(nums[i]==nums[j] && abs(i - j) <= k){
                    return true;
                    cout<<i<<" "<<j<<endl;
                }
            }
        }
        cout<<i<<" "<<j<<endl;
        return false;
    }
};
