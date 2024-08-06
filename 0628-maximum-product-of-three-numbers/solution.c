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
int maximumProduct(int* a, int n) { 
    merge_sort(a,0,n-1);
    int p1=a[0]*a[1]*a[n-1];
    int p2=a[n-1]*a[n-2]*a[n-3];
    return (p1>p2)?p1:p2 ;
}
