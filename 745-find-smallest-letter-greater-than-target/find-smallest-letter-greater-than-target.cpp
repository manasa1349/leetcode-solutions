class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        if(letters[n-1]<=target)return letters[0];
        int l=0,h=n-1;
        while(l<=h){
            int m=(l+h)/2;
            if(letters[m]>target){
                //decrease
                h=m-1;
            }else{
                //increase
                l=m+1;
            }
        }
        return letters[l%n];
    }
};