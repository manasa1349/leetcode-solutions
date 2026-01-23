class Solution {
public:
    int numberOfSteps(int num) {
        //even -> /2  means >>
        //odd ->  -1  means last bit 1->0
        //8 & 1 ->> (1000 & 1) ->> (1000 & 0001) ->> 0000
        //3 & 1 ->> 11 & 1 ->> 01
        //so num&1 gives 0(even) , 1(odd)
        int ans=0;
        while(num){
            if(num&1){
                num-=1;
            }else{
                num>>=1;
            }
            ans++;
        }
        return ans;
    }
};
