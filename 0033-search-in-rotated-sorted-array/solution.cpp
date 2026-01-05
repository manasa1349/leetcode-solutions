class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int mnidx=min_element(arr.begin(),arr.end())-arr.begin();
        if(target>=arr[mnidx] && target<=arr[n-1]){
            int val=lower_bound(arr.begin()+mnidx,arr.end(),target)-arr.begin();
            if(val<n && arr[val]==target){
                return val;
            }
        }
        if(mnidx>0 && target>=arr[0] && target<=arr[mnidx-1]){
            int val=lower_bound(arr.begin(),arr.begin()+mnidx,target)-arr.begin();
            if(val<mnidx && arr[val]==target){
                return val;
            }
        }
        return -1;
    }
};
