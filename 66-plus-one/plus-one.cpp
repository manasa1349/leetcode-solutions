class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        vector<int>ans;
        int n=arr.size();
        int car=1;
        for(int i=n-1;i>=0;i--){
            if(arr[i]+car!=10){
                ans.push_back(arr[i]+car);
                car=0;
            }else{
                ans.push_back(0);
            }
        }
        if(car){
            ans.push_back(1);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};