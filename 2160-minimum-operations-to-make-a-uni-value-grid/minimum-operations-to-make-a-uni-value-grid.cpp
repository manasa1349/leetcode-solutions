class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>arr;
        for(auto i:grid){
            for(auto j:i){
                arr.push_back(j);
            }
        }
        sort(arr.begin(),arr.end());
        int n=arr.size(),ans1=0,ans2=0;
        int med1=arr[(n)/2];
        // int med2=arr[(n-1)/2];
        for(int i=0;i<n;i++){
            if(arr[i]%x != med1%x) return -1;
            // if(arr[i]%x != med2%x) return -1;
            ans1+=(abs(arr[i]-med1))/x;
            // ans2+=(abs(arr[i]-med2))/x;
        }
        return ans1;
        // return min(ans1,ans2);
    }
};