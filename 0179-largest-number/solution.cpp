class Solution {
public:
    string largestNumber(vector<int>& a) {
        int n=a.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(to_string(a[j])+to_string(a[i]) > to_string(a[i])+to_string(a[j])){
                    swap(a[i],a[j]);
                }
            }
        }
        string s="";
        if(a[0]==0){
            return "0";
        }
        for(int i=0;i<n;i++){
            s+=to_string(a[i]);
        }
        return s;
    }
};
