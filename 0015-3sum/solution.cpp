class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        set<vector<int>>s;
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while( j<k ){
                int val=arr[i]+arr[j]+arr[k];
                if(val>0){
                    k--;
                }else if(val<0){
                    j++;
                }else{
                    s.insert({arr[i],arr[j],arr[k]});
                    while(j+1<n && arr[j]==arr[j+1]){ j++;}
                    while(k>j && arr[k]==arr[k-1]){ k--;}
                    j++;
                    k--;
                }
                // if(j==k){
                //     break;
                // }
            }
        }
        vector<vector<int>>ans(s.begin(),s.end());
        return ans;
    }
};
