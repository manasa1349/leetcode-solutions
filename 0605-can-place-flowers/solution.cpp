class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowersbed, int k) {
        int cnt=0;
        int n=flowersbed.size();
        if(n==1){
            if(flowersbed[0]==0){
                return true;
            }/*else{
                return false;
            }*/
        }
        for(int i=0;i<flowersbed.size();i++){
            if(flowersbed[i]==0){
                if(i==0){
                    if(i+1>=0 && i+1<n && flowersbed[i+1]!=1){
                        cnt++;
                        flowersbed[i]=1;
                    }
                }else if(i==n-1){
                    if(i-1>=0 && i-1<n && flowersbed[i-1]!=1){
                        cnt++;
                        flowersbed[i]=1;
                    }
                }else{
                    if(flowersbed[i-1]!=1 && flowersbed[i+1]!=1){
                        cnt++;
                        flowersbed[i]=1;
                    }
                }
            }
        }
        return k<=cnt;
    }
};
