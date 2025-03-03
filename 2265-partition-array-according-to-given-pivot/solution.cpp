class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>res(nums.size());
        int lcnt=0,ecnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                lcnt++;
            }else if (nums[i]==pivot){
                ecnt++;
            }
        }
        int i=0,j=lcnt,k=lcnt+ecnt;
        for(int m=0;m<nums.size();m++){
            if(nums[m]<pivot){
                res[i++]=nums[m];
            }else if(nums[m]>pivot){
                res[k++]=nums[m];
            }else{
                res[j++]=nums[m];
            }
        }
        return res;
    }
};
