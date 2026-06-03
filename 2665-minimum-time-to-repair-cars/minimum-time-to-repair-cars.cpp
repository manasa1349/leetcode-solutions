class Solution {
public:
    bool check(long long t,vector<int>&ranks,int cars){
        long long car=0;
        for(long long i=0;i<ranks.size();i++){
            car+=sqrt(t/ranks[i]);
            if(car>=cars) return true;
        }
        return false;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        //binary search on time t= ranks[i]*n*n
                            // t=ranks* n^2
                            // t/rank=n^2
                            // (car done in time t) n=sqrt(t/rank)
        long long l=1; //min time
        long long h=(*min_element(ranks.begin(),ranks.end()))*1LL*cars*cars;//max possible min time
        long long ans=0;
        while(l<=h){
            long long mid=l+(h-l)/2;
            if(check(mid,ranks,cars)){
                ans=mid;
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};