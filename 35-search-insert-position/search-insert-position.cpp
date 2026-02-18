class Solution {
public:
    int searchInsert(vector<int>& a, int key) {
        int l=0;
        int h=a.size()-1;
        while(l<=h){
            int m=(l+h)/2;
            if(a[m]==key){
                return m;
            }
            if(a[m]<key){
                l=m+1;
            }else{
                h=m-1;
            }
        }
        return l;
    }
};