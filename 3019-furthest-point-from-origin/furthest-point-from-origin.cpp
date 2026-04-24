class Solution {
public:
    int furthestDistanceFromOrigin(string arr) {
        int cnt=0,o=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]=='L') cnt--;
            else if(arr[i]=='R') cnt++;
            else o++;
        }
        return abs(cnt)+o;
    }
};