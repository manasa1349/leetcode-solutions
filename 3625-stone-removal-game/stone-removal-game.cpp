class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        int val=10;
        bool alice=true;
        while(n>=val){
            n-=val;
            val--;
            alice=!alice;
        }
        return !alice;
    }
};