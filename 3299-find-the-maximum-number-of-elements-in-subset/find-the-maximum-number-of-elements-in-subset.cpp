class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<long long,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int ans=1;
        if(mp.find(1)!=mp.end()){
            ans=(mp[1]%2==0?mp[1]-1:mp[1]);
        }
        for(auto i:mp){
            if(i.first==1) continue;
            int cnt=0;
            long long curr=i.first;
            while(mp.count(curr) && mp[curr]>=2){
                cnt+=2;
                // if(curr > 1000000000LL) break;
                curr*=curr;
            }
            //ex:
            //2 4 16 4 2 
            //2:cnt=2 , 4:cnt=4 
            //if 16 exist cnt=5 (2,4,16,4,2)
            //else cnt=3 (2,4,2)
            if(mp.count(curr) && mp[curr]>=1){
                cnt++;
            }else{
                cnt--;
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};