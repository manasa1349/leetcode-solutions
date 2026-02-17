class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int tar) {
        int n=a.size();
        int m=a[0].size();
        int l=0,h=m-1;
        while(l>=0 && h>=0 && l<=n-1 && h<=m-1){
            if(tar<a[l][h]){
                h--;
            }else if(tar>a[l][h]){
                l++;
            }else{
                return true;
            }
        }
        return false;
    }
};