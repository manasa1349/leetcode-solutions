class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int i=0;
        if(s1[0]!=s2[0] || s2[0]!=s3[0] ){
            return -1;
        }
        int n1=s1.size(),n2=s2.size(),n3=s3.size();
        while(i<n1 && i<n2 && i<n3){
            if(s1[i]==s2[i] && s2[i]==s3[i]){
                i++;
            }else{
                break;
            }
        }
        return (n1-i)+(n2-i)+(n3-i);
    }
};