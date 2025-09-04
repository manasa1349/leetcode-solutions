class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,r=0;
        int ans=0,n=fruits.size();
        unordered_map<int,int>mpp;
        while(r<n){
            mpp[fruits[r]]++;
            if(mpp.size()>2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0){
                    mpp.erase(fruits[l]);
                }
                l++;
            }
            if(mpp.size()<=2){
                ans=max(ans,r-l+1);
            }
            r++;
        }
        return ans;
    }
};
