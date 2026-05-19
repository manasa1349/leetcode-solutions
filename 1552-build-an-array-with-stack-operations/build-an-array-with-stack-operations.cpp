class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>res;
        int k=1,i=0;
        while(k<=n && i<target.size()){
            if(target[i]==k){
                res.push_back("Push");
                i++;
            }else{
                res.push_back("Push");
                res.push_back("Pop");
            }
            k++;
        }
        return res;
    }
};