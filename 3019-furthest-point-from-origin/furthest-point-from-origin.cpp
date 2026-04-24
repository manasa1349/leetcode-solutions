class Solution {
public:
    int furthestDistanceFromOrigin(string arr) {
        int l=0,r=0,o=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]=='L') l++;
            else if(arr[i]=='R') r++;
            else o++;
        }
        return max(l+o-r,r+o-l);
    }
};