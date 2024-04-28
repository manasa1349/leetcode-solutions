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
int addedInteger(int* nums1, int n1, int* nums2, int n2) {
    merge_sort(nums1,0,n1-1);
    merge_sort(nums2,0,n2-1);
    return nums2[0]-nums1[0];
}
