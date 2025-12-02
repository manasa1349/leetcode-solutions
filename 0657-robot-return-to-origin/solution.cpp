class Solution {
public:
    bool judgeCircle(string moves) {
        int u,d,l,r;
        u=0,r=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U') u++;
            else if(moves[i]=='L') r--;
            else if(moves[i]=='R') r++;
            else if(moves[i]=='D') u--;
        }
        return (r==0)&&(u==0);
    }
};
