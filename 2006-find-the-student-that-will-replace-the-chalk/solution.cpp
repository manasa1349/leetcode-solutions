class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long n=chalk.size();
        long long summ=0;
        for(int i=0;i<n;i++){
            summ+=chalk[i];
        }
       /* long long cycle=floor(summ/n);
        long long newk=k-cycle*summ;*/
        k%=summ;
        long long ans=0;
        for(int i=0;i<n;i++){
            if(k < chalk[i]){
                ans=i;
                break;
            }
            k-=chalk[i];
        }
        return ans;
    }
};
