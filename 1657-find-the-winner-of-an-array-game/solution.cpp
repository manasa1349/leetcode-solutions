class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int cnt=0;
        int prev=0;
        int w=0;
        int n=arr.size();
        if(k>=arr.size()){
            return *max_element(arr.begin(),arr.end());
        }
        while(n--){
            prev=w;
            if(arr[0]>=arr[1]){
                w=arr[0];
                int k=arr[1];
                arr.erase(arr.begin()+1);
                arr.push_back(k);
            }else{
                w=arr[1];
                int k=arr[0];
                arr.erase(arr.begin());
                arr.push_back(k);
            }
            if(prev==w){
                cnt++;
            }else{
                cnt=0;
            }
            if(cnt==k-1){
                break;
            }
        }
        return w;
    }
};
