class Solution {
public:
    int closestTarget(vector<string>& arr, string target, int startIndex) {
        int n=arr.size();
        int i=startIndex;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                int frwd=abs(i-startIndex);
                int bckwd=n-frwd;
                ans=min({ans,frwd,bckwd});
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};