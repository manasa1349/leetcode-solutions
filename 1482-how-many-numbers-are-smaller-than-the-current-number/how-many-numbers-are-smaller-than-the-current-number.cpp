class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>freq(101,0);
        vector<int>res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(int i=1;i<freq.size();i++){
            freq[i]+=freq[i-1];
        }
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                res.push_back(0);
                continue;
            }
            res.push_back(freq[nums[i]-1]);
        }
        return res;
    }
};