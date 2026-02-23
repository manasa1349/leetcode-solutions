class Solution {
public:
    int solve(int res,int mid,int n,set<int>& ban,int maxSum){
        int sum=(mid*(mid+1))/2;
        res=mid;
        for(int it:ban){
           if(it<=mid){
                res--;
                sum-=it;
           }
           else{
            break;
           }
        }
        if(sum<=0){
            return 0;
        }
        if(sum<=maxSum){
            return res;
        }
        return 0;
    }
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int l=1,h=n,res=0;
        set<int>ban;
        for(int it:banned){
            ban.insert(it);
        }
        while(l<=h){
            int mid=l+(h-l)/2;
            if(solve(res,mid,n,ban,maxSum)>0){
                res=solve(res,mid,n,ban,maxSum);
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return res;
    }
};