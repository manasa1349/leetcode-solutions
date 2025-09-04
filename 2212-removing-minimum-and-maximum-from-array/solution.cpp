class Solution {
public:
    int minimumDeletions(vector<int>& arr) {
        int mx=max_element(arr.begin(), arr.end()) - arr.begin();
        int mn=min_element(arr.begin(), arr.end()) - arr.begin();
        int ans=0,n=arr.size();
        int i=max(mx,mn);
        int j=min(mx,mn);
        ans=min({n-j,i+1,j+(n-i)+1});
        cout<<mx<<mn<<j<<i;
        return ans;
    }
};
