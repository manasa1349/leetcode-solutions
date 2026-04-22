class Solution {
public:
    vector<string> twoEditWords(vector<string>& arr1, vector<string>& arr2) {
        vector<string>ans;
        for(int i=0;i<arr1.size();i++){
            for(int j=0;j<arr2.size();j++){
                //letters
                int cnt=0;
                for(int k=0;k<arr1[i].size();k++){
                    if(arr1[i][k]!=arr2[j][k]){
                        cnt++;
                    }
                    if(cnt>3) break;
                }
                if(cnt<=2){
                    ans.push_back(arr1[i]);
                    break;
                }
            }
        }
        return ans;
    }
};