class Solution {
public:
    int maxDifference(string s) {
        int n=s.size();
        vector<int>freq(26);
        for(int i=0;i<n;i++){
            int k=s[i]-'a';
            freq[k]++;
        }
        int max_odd=0;
        int min_odd=INT_MAX;
        int max_even=0;
        int min_even=INT_MAX;
        for(int i=0;i<freq.size();i++){
            if(freq[i]>0){
                if(freq[i]%2!=0){
                    max_odd=max(max_odd,freq[i]);
                    min_odd=min(min_odd,freq[i]);
                }else if(freq[i]%2==0){
                    max_even=max(max_even,freq[i]);
                    min_even=min(min_even,freq[i]);
                }
            }
        }
        int a1=max_odd-min_even;
        int a3=min_odd-max_even;
        return max(a1,a3);
    }
};
