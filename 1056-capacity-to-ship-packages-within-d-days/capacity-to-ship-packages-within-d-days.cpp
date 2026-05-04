class Solution {
public:
    bool func(vector<int>&arr,int k,int days){
        int load=0,day=1;
        for(int i=0;i<arr.size();i++){
            if(load+arr[i]<=k){
                load+=arr[i];
            }else{
                day++;
                load=arr[i];
            }
        }
        return day<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int l=*max_element(weights.begin(),weights.end());
        int h=accumulate(weights.begin(),weights.end(),0);
        int ans=0;
        while(l<=h){
            int cap=(l+h)/2;
            if(func(weights,cap,days)){
                ans=cap;
                h=cap-1;
            }else{
                l=cap+1;
            }
        }
        return ans;
    }
};