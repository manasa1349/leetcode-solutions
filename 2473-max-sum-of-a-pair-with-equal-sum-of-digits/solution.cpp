class Solution {
public:
    int sum(int n){
        int ans=0;
        while(n>0){
            ans+=n%10;
            n/=10;
        }
        return ans;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res = -1;
        for (int n : nums) {
            int s = 0, t = n;
            while (t) {
                s += t % 10;
                t /= 10;
            }
            if (mp.count(s)) res = max(res, mp[s] + n);
            mp[s] = max(mp[s], n);
        }
        return res;
    }
};
