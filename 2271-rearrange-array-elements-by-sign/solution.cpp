class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        int n=nums.size();
        // for(int i=0;i<n;i++){
        //     if()
        // }
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        int i,j=0;
        for(i=0;i<min(pos.size(),neg.size());i++){
            nums[j++]=pos[i];
            nums[j++]=neg[i];
        }
        if(pos.size()<neg.size()){
            for(int k=i;k<neg.size();k++){
                nums[j++]=neg[k];
            }
        }else{
            for(int k=i;k<pos.size();k++){
                nums[j++]=pos[k];
            }
        }
        return nums;
    }
};
