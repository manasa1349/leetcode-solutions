class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,vector<int>>mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]={i,i};
            }else{
                mp[s[i]][1]=i;
            }
        }
        vector<vector<int>>arr;
        for(auto i:mp){
            arr.push_back(i.second);
        }
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        ans.push_back(arr[0]);
        for(int i=1;i<arr.size();i++){
            if(ans.back()[1]>=arr[i][0]){
                ans.back()[1]=max(ans.back()[1],arr[i][1]);
            }else{
                ans.push_back(arr[i]);
            }
        }
        vector<int>res;
        for(auto i:ans){
            res.push_back(i.back()-i.front()+1);
        }
        return res;
    }
};