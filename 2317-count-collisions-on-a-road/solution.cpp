class Solution {
public:
    int countCollisions(string arr) {
        int n=arr.size();
        int ans=0,i,j;
        for(i=0;i<n;i++){
            if(arr[i]!='L'){
                break;
            }
        }
        for(j=n-1;j>=0;j--){
            if(arr[j]!='R'){
                break;
            }
        }
        for(int k=i;k<=j;k++){
            if(arr[k]!='S'){
                ans++;
            }
        }
        return ans;
    }
};
