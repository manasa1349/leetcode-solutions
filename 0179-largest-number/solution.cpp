class Solution {
public:
    string largestNumber(vector<int>& a) {
        int n=a.size();
        vector<string>arr(n);
        for(int i=0;i<n;i++){
            arr[i]=to_string(a[i]);
        }
        sort(arr.begin(),arr.end(),[](string a,string b){
            return a+b>b+a;
        });
        if(arr[0]=="0") return "0";
        string ans=accumulate(arr.begin(),arr.end(),string(""));
        return ans;
    }
};
