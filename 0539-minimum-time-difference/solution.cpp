class Solution {
public:
    int diff(string s1,string s2){
        int n1 =stoi(s1.substr(0, 2));
        int n2 =stoi(s1.substr(3, 2));
        int n3=stoi(s2.substr(0, 2));
        int n4=stoi(s2.substr(3,2));
        int t1=n1*60+n2;
        int t2=n3*60+n4;
        return min(abs(t1-t2),abs(abs(t1-t2)-1440));

    }
    int findMinDifference(vector<string>& s) {
        //int min=INT_MAX;
        sort(s.begin(),s.end(),greater<string>());
        vector<int>v;
        for(int i=0;i<s.size()-1;i++){
            int ans=diff(s[i],s[i+1]);
            v.push_back(ans);
        }
        v.push_back(diff(s[s.size()-1],s[0]));
        sort(v.begin(),v.end());
        return v[0];
        //return min;
    }
};
