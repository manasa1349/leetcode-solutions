/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* a, int n, int target, int* r) {
    //int c=0,d=0;
    *r=2;
    int *arr=(int *)malloc(2*sizeof(int));
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==target-a[j])
            {
                arr[0]=i;
                arr[1]=j;
                return arr;
            }
        }
    }
    return -1;
}
