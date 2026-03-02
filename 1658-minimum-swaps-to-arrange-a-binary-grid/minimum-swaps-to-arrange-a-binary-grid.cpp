class Solution {
public:
    int minSwaps(vector<vector<int>>& arr) {
        int n=arr.size(),ans=0;
        vector<int>zeroes(n);
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=n-1;j>=0;j--){
                if(arr[i][j]==0){
                    cnt++;
                }else{
                    break;
                }
            }
            zeroes[i]=cnt;
        }
        for(int i=0;i<n;i++){
            int req=n-i-1;
            // auto it=find(zeroes.begin(),zeroes.end(),req);
            // if(it==zeroes.end()) return -1;
            // int idx=it-zeroes.begin();
            int idx=-1;
            for(int j=i;j<zeroes.size();j++){
                if(zeroes[j]>=req){
                    idx=j;
                    break;
                }
            }
            if(idx==-1) return -1;
            ans+=idx-i;
            int val=zeroes[idx];
            zeroes.erase(zeroes.begin()+idx);
            zeroes.insert(zeroes.begin()+i,val);
        }
        return ans;
    }
};