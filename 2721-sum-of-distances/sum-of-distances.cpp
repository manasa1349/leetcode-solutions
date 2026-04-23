class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        unordered_map<long long,vector<int>>mp;
        int sz=nums.size();
        for(int i=0;i<sz;i++){
            mp[nums[i]].push_back(i);
        }
        vector<long long>ans(sz,0);
        for(auto i:mp){
            vector<int>arr=i.second;
            int n=arr.size();
            long long sum=0;
            for(int i=0;i<n;i++){
                sum+=arr[i];
            }
            long long lsum = 0;
            for(int i = 0; i < n; i++) {
                long long idx = arr[i];
                
                // (current_idx * count_left - prefix_sum) + (suffix_sum - current_idx * count_right)
                long long left_dist = (idx * i) - lsum;
                
                long long rsum = sum - lsum - idx;
                long long right_dist = rsum - (idx * (n - 1 - i));
                
                ans[idx] = left_dist + right_dist;
                
                lsum += idx;
            }
        }
        return ans;
    }
};