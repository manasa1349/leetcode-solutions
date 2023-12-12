int maxProduct(int *nums, int numsSize) {
    int b1=0,b2=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>b1)
        {
             b2=b1;
             b1=nums[i];
        }
        else if(nums[i]>b2)
        {
            b2=nums[i];
        }

    }
    return (b1 - 1)*(b2 - 1);
}
