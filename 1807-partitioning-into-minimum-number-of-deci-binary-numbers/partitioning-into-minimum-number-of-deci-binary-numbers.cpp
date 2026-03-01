class Solution {
public:
    int minPartitions(string n) {
       int maxi=0;
        for(int i=0;i<n.size();i++){
            int val=n[i]-'0';
            if(val>maxi){
                maxi=val;
            }
            if(maxi==9){
                break;
            }
        }
        return maxi;
    }
};