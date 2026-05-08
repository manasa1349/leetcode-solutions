class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](auto &a,auto &b){
            if(a[1]==b[1]){
                return a[0]<b[0];
            }
            return a[1]<b[1];
        });
        int cnt=0;
        int prev_end=intervals[0][1],n=intervals.size();
        for(int i=1;i<n;i++){
            if(intervals[i][0]<prev_end){
                cnt++;
            }else{
                prev_end=intervals[i][1];
            }
        }
        return cnt;
    }
};