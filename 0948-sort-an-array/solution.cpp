class Solution {
public:
void merge(int *a,int l,int m,int h)
{
    int i=l,j=m+1,k=0;
    int res[h-l+1];
    while(i<=m && j<=h)
    {
        if(a[i]<=a[j])
        {
            res[k]=a[i];
            i++;
            k++;
        }
        else
        {
            res[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=m)
    {
        res[k]=a[i];
        i++;
        k++;
    }
    while(j<=h)
    {
        res[k]=a[j];
        j++;
        k++;
    }
    k=0;
    for(i=l;i<=h;i++)
    {
        a[i]=res[k];
        k++;
    }
}
void  merge_sort(int *a,int l,int h)
{
    if(l<h)
    {
        int m=(l+h)/2;
        merge_sort(a,l,m);
        merge_sort(a,m+1,h);
        merge(a,l,m,h);
    }

}
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        int a[n];
        for(int i=0;i<n;i++){
            a[i]=nums[i];
        }
        merge_sort(a,0,n-1);
        for(int i=0;i<n;i++){
            nums[i]=a[i];
        }
        return nums;
    }
};
