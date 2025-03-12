class Solution {
public:
    int binary(int l,int h,vector<int>nums){
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==0){
                h=mid-1;
            }else if(nums[mid]<0){
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        return l;
    }
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int idx=binary(0,n-1,nums);
        cout<<idx<<endl;
        int pos=0;
        int neg=0;
        for(int j=idx;j<n;j++){
            if(nums[j]>0){
                pos=n-j;
                   break;
            }
        }
        for(int j=idx-1;j>=0;j--){
            if(nums[j]<0){
                neg=j+1;
                break;
            }
        }
        cout<<pos<<" "<<neg<<endl;
        return max(pos,neg);
    }
};
