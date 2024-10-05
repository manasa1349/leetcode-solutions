class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxi = 1;
         for(int i = 0 ; i < nums.size() ; i++) {
            int cnt = 1;
            for(int j = i ; j < nums.size()-1 ; j++) {
                if(nums[j] < nums[j+1]) cnt++;
                else break;
            }
            maxi = max(maxi,cnt);
         }
         cout<<maxi<<endl;
         int maxi2 = 1;
         for(int i = 0 ; i < nums.size() ; i++) {
            int cnt = 1;
            for(int j = i ; j < nums.size()-1 ; j++) {
                if(nums[j] > nums[j+1]) cnt++;
                else break;
            }
            maxi2 = max(maxi2,cnt);
         }
         return max(maxi,maxi2);
    }
};
