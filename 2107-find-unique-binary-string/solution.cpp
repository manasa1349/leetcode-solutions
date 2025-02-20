class Solution {
public:
    string ans;
    unordered_set<string>numset;
    bool func(string s,int n){
        if(s.size()==n){
            if(numset.find(s)==numset.end()){
                ans=s;
                return true;
            }
            return false;
        }
        if(func(s+'0',n)){
            return true;
        }
        if(func(s+'1',n)){
            return true;
        }
        return false;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        numset=unordered_set(nums.begin(),nums.end());
        if(func("",nums.size())){
            return ans;
        }
        return "";
        /*string ans = "";
        for (int i = 0; i < nums.size(); i++) {
            ans += (nums[i][i] == '0') ? '1' : '0';
        }
        return ans;*/
    }
};
