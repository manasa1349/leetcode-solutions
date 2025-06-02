class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int>ans(n,1);
       /* if(ratings[0]>ratings[1]){
            ans[0]+=1;
        }*/
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                ans[i]=ans[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                ans[i]=max(ans[i],ans[i+1]+1);
            }
        }

        /*if(ratings[n-1]>ratings[n-2]){
            ans[n-1]=ans[n-2]+1;
        }else{
            ans[n-1]=ans[n-2]-1;
        }*/
        int sum=0;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
            sum+=ans[i];
        }
        return sum;
    }
};
