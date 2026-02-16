class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        sort(bulbs.begin(),bulbs.end());
        vector<int>ans;
        int n=bulbs.size();
        for(int i=0;i<n;i++){
            if(!ans.empty() && bulbs[i]==ans.back()){
                ans.pop_back();
            }else{
                ans.push_back(bulbs[i]);
            }
        }
        return ans;
    }
};