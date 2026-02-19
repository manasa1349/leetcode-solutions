class Solution {
public:
    int countBinarySubstrings(string s) {
        int cnt=1;
        vector<int>arr;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                cnt++;
            }else{
                arr.push_back(cnt);
                cnt=1;
            }
        }
        arr.push_back(cnt);
        cnt=0;
        for(int i=1;i<arr.size();i++){
            cnt+=min(arr[i-1],arr[i]);
        }
        return cnt;
    }
};