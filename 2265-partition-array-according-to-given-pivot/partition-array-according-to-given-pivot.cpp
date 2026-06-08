class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        int lcnt=0,scnt=0;
        vector<int>res(n);
        for(int k=0;k<n;k++){
            if(nums[k]<pivot){
                lcnt++;
            }else if(nums[k]==pivot){
                scnt++;
            }
        }
        int i=0,j=lcnt,k=lcnt+scnt;
        for(int m=0;m<nums.size();m++){
            if(nums[m]<pivot){
                res[i++]=nums[m];
            }else if(nums[m]==pivot){
                res[j++]=nums[m];
            }else{
                res[k++]=nums[m];
            }
        }
        return res;
    }
};