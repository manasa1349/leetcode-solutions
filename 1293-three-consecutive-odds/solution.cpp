class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int p1=0,p2=1,p3=2;
        while(p3<arr.size()){
            if(arr[p1]%2!=0  && arr[p2]%2!=0 && arr[p3]%2!=0){
                return true;
            }
            p1++;
            p2++;
            p3++;
        }
        return false;
    }
};
