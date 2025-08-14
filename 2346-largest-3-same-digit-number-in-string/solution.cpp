class Solution {
public:
    string largestGoodInteger(string num) {
        string maxs="";
        int n=num.size();
        // int l=0,r=0;
        // vector<int>freq()
        // while(l<r){
            
        // }
        for(int i=2;i<n;i++){
            if(num[i-2]==num[i-1] && num[i-1] ==num[i]){
                string flg=string(3,num[i]);
                maxs=max(maxs,flg);
            }
        }
        return maxs;
    }
};
