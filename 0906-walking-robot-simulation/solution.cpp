class Solution {
public:
    int x=0,y=0;
    char d='n';
    set<pair<int,int>>obs;
    char dirchng(char d,int v){
        if(d=='n'){
            return (v == -1) ? 'e' : 'w';
        }else if(d=='s'){
            return (v == -1) ? 'w' : 'e';
        }else if(d=='e'){
            return (v == -1) ? 's' : 'n';
        }else if(d=='w'){
            return (v == -1) ? 'n' : 's';
        }
        return ' ';
    }
    pair<int,int> xycoor(int x,int y,int val,char d){
        if(d=='n'){
            y+=val;
        }else if(d=='s'){
            y-=val;
        }else if(d=='e'){
            x+=val;
        }else if(d=='w'){
            x-=val;
        }
        return {x,y};
    }

    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        for(int i=0;i<obstacles.size();i++){
            obs.insert({obstacles[i][0],obstacles[i][1]});
        }
        int ans=0;
        for(int i=0;i<commands.size();i++){
            if(commands[i]==-1 || commands[i]==-2){
                d=dirchng(d,commands[i]);
            }else{
                while(commands[i]--){
                    auto [nx,ny]=xycoor(x,y,1,d);
                    if(obs.count({nx,ny})){
                        break;
                    }
                    x=nx;
                    y=ny;
                }
                ans=max(ans,x*x+y*y);
            }
        }
        return ans;
    }
};
