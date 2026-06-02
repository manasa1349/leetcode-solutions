class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        //land Start
        int minLandEnd=INT_MAX;
        int ans = INT_MAX;
        for(int i=0;i<landDuration.size();i++){
            if(landStartTime[i]+landDuration[i]<minLandEnd){
                minLandEnd=landStartTime[i]+landDuration[i];
            }
        }
        for(int i=0;i<waterStartTime.size();i++){
            ans = min(ans,
                      max(minLandEnd, waterStartTime[i]) +
                      waterDuration[i]);
        }

        //water start
        int minWaterEnd=INT_MAX;
        for(int i=0;i<waterStartTime.size();i++){
            if(waterStartTime[i]+waterDuration[i]<minWaterEnd){
                minWaterEnd=waterStartTime[i]+waterDuration[i];
            }
        }
        for(int i=0;i<landStartTime.size();i++){
            ans = min(ans,
                      max(minWaterEnd, landStartTime[i]) +
                      landDuration[i]);
        }
        return ans;
    }
};