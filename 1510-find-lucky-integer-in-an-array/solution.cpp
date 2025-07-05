class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto i:arr){
            mp[i]++;
        }
        int maxlen=0;
        for(auto i:arr){
            if(i==mp[i]){
                maxlen=max(maxlen,i);
            }

        }
        if(maxlen==0) return -1;
        return maxlen;
    }
};
