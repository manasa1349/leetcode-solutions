class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        int cnt=1,hmax=1,vmax=1;
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());
        for(int i=0;i<hBars.size()-1;i++){
            if(hBars[i]+1==hBars[i+1]){
                cnt++;
            }else{
                cnt=1;
            }
            hmax=max(hmax,cnt);
        }
        cnt=1;
        for(int i=0;i<vBars.size()-1;i++){
            if(vBars[i]+1==vBars[i+1]){
                cnt++;
            }else{
                cnt=1;
            }
            vmax=max(vmax,cnt);
        }
        int s=min(hmax,vmax)+1;
        return s*s;
    }
};
