class Solution {
public:
    int func(vector<int>&arr,int k,int i){
        if(arr.size()==1){
            return arr[0];
        }
        i = ((i + k-1) % arr.size());
        arr.erase(arr.begin()+i);
        return func(arr,k,i);
    }
    int findTheWinner(int n, int k) {
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }
        int ans=func(arr,k,0);
        return ans;
    }
};
