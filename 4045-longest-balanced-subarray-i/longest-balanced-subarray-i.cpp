class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int sum=0,ans=0,n=nums.size();
        for(int i=0;i<n;i++){
            unordered_map<int,int>o,e;
            for(int j=i;j<n;j++){
                if(nums[j]%2==0){
                    e[nums[j]]++;
                }else{
                    o[nums[j]]++;
                }
                if(o.size()==e.size()){
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};