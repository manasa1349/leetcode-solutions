class Solution {
public:
    bool asteroidsDestroyed(int ms, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long mass=ms;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]>mass){
                return false;
            }
            mass+=asteroids[i];
        }
        return true;
    }
};