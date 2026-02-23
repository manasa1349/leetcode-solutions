class Solution {
public:
    int maxCount(vector<int>& nums, int n, int maxSum) {
        set<int>s(nums.begin(),nums.end());
        int cnt=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            if(s.find(i)==s.end()){
                if(sum+i>maxSum) break;
                sum+=i;
                cnt++;
            }
        }
        return cnt;
    }
};