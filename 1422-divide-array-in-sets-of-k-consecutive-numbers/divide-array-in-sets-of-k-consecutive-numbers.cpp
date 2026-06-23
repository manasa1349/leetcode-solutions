class Solution {
public:
    bool isPossibleDivide(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize!=0){
            return false;
        }
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[hand[i]]++;
        }
        for(auto i:mp){
            int st=i.first;
            while(mp[st]>0){
                for(int j=0;j<groupSize;j++){
                    int val=st+j;
                    if(mp[val]==0){
                        return false;
                    }
                    mp[val]--;
                }
            }
        }
        return true;
    }
};