class Solution {
public:
    int func(vector<int>sub,int x){
        // unordered_map<int, int> mp;
        // for (int num : sub) mp[num]++;
        // vector<pair<int,int>>arr(mp.begin(),mp.end());
        // sort(arr.begin(),arr.end(),[](auto &a,auto &b){
        //     if(a.second==b.second){
        //         return a.first>b.first;
        //     }
        //     return a.second>b.second;
        // });
        // int sum = 0;
        // for (int i = 0; i < x; i++) {
        //     sum += arr[i].first;
        // }
        // return sum;
        unordered_map<int, int> freq;
        for (int num : sub) freq[num]++;

        vector<pair<int, int>> arr(freq.begin(), freq.end());

        sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
            if (a.second == b.second)
                return a.first > b.first;
            return a.second > b.second;
        });

        unordered_set<int> keep;
        for (int i = 0; i < min(x, (int)arr.size()); i++)
            keep.insert(arr[i].first);

        int sum = 0;
        for (int num : sub)
            if (keep.count(num)) sum += num;

        return sum;
    }
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int>ans;
        for (int i = 0; i + k <= nums.size(); i++) {
            vector<int> sub(nums.begin() + i, nums.begin() + i + k);
            ans.push_back(func(sub, x));
        }
        return ans;
    }
};
