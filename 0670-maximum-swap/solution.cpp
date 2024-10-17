class Solution {
public:
    int maximumSwap(int num) {
        /*vector<int>a;
        int max=0;
        int temp=num;
        while(num){
            a.push_back(num%10);
            num/=10;
        }
        int n=a.size();
        int mx=*max_element(a.begin(),a.end());
        if(a[n-1]==mx){
            return temp;
        }else{
            int mn=min_element(a.begin(),a.end())-a.begin();
            swap(a[mn],a[n-1]);
            int ans=0;
            for(int i=n-1;i>=0;i--){
                ans=ans*10+a[i];
            }
            return ans;
        }*/
        string s = to_string(num);
        int n = s.size();
        vector<int> last(10, -1);
        for (int i = 0; i < n; ++i) {
            last[s[i] - '0'] = i;
        }
        for (int i = 0; i < n; ++i) {
            for (int d = 9; d > s[i] - '0'; --d) {
                if (last[d] > i) {
                    swap(s[i], s[last[d]]);
                    return stoi(s);
                }
            }
        }
        return num;
    }
};
