class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        //land Start
        int lst=landStartTime[0];
        int ldur=landDuration[0];
        for(int i=1;i<landDuration.size();i++){
            if(landStartTime[i]+landDuration[i]<lst+ldur){
                lst=landStartTime[i];
                ldur=landDuration[i];
            }
        }
        int minLandEnd=lst+ldur;
        int ans = INT_MAX;

        for(int i=0;i<waterStartTime.size();i++){
            ans = min(ans,
                      max(minLandEnd, waterStartTime[i]) +
                      waterDuration[i]);
        }

        //water start

        int wst=waterStartTime[0];
        int wdur=waterDuration[0];
        for(int i=1;i<waterStartTime.size();i++){
            if(waterStartTime[i]+waterDuration[i]<wst+wdur){
                wst=waterStartTime[i];
                wdur=waterDuration[i];
            }
        }
        int minWaterEnd=wst+wdur;
        for(int i=0;i<landStartTime.size();i++){
            ans = min(ans,
                      max(minWaterEnd, landStartTime[i]) +
                      landDuration[i]);
        }

        return ans;
    }
};