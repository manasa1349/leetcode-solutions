class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& a, int t) {
        int cnt=0;
        for(int i=0;i<a.size();i++){
            if(a[i]>=t) cnt++;
        }
        return cnt;
    }
};
