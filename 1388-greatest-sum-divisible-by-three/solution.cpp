class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=accumulate(nums.begin(),nums.end(),0);
        int i,n=nums.size();
        if(sum%3==2){
            int k1,k2;
            k1=k2=0;
            for( i=0;i<nums.size();i++){
                if(nums[i]%3==2){
                    k1=sum-nums[i];
                    break;
                }
            }
            int cnt=0;
            for( i=0;i<nums.size();i++){
                if(nums[i]%3==1 && cnt==1){
                    k2=k2-nums[i];
                    cnt++;
                }
                if(nums[i]%3==1 && cnt==0){
                    k2=sum-nums[i];
                    cnt++;
                }  
                if(cnt==2){
                    break;
                }
            }
            if(cnt==2){
                sum=max(k1,k2);
            }else{
                sum=k1;
            }
            cout<<k1<<k2;
        }

        if(sum%3==1){
            int k1,k2;
            k1=k2=0;
            for( i=0;i<nums.size();i++){
                if(nums[i]%3==1){
                    k1=sum-nums[i];
                    break;
                }
            }
            int cnt=0;
            for( i=0;i<nums.size();i++){
                if(nums[i]%3==2 && cnt==1){
                    k2=k2-nums[i];
                    cnt++;
                }
                if(nums[i]%3==2 && cnt==0){
                    k2=sum-nums[i];
                    cnt++;
                } 
                if(cnt==2){
                    break;
                }
            }
            if(cnt==2){
                sum=max(k1,k2);
            }else{
                sum=k1;
            }
        }
        return sum;
    }
};
