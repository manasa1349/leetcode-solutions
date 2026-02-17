class Solution {
public:
    bool check(vector<int>arr,long long k,int h){
        long long val=0;
        for(int i=0;i<arr.size();i++){
            val+=(arr[i]+k-1)/k;
            if(val>h) return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        long long l=1;
        long long h=arr[n-1];
        int res=arr[n-1];
        while(l<=h){
            long long mid=(l+h)/2;
            if(check(arr,mid,k)){
                res=mid;
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return res;
    }
};