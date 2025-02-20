class Solution {
public:
    vector<string>res;
    void func(string s,int n){
        if(s.size()==n){
            res.push_back(s);
            return;
        }
        func(s+'0',n);
        func(s+'1',n);
    }
    string findDifferentBinaryString(vector<string>& nums) {
        func("0",nums.size());
        func("1",nums.size());
        unordered_map<string,int>mp;
        for(int i=0;i<res.size();i++){
            mp[res[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second==1){
                return it.first;
            }
        }
        return "";
    }
};
