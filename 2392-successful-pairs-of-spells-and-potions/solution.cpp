class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>ans(spells.size());
        for(int i=0;i<spells.size();i++){
            long long spell = spells[i];
            long long required = (success + spell - 1) / spell;
            int idx = lower_bound(potions.begin(), potions.end(), required) - potions.begin();
            ans[i]=potions.size()-idx;
        }
        return ans;
    }
};
