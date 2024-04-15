int func(int n)
{
    if(n==1)
    {
        return 0;
    }
    int cnt=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
    }
    if (cnt==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int maximumPrimeDifference(int* a, long long n) {
    long long i,j,ind1=0,ind2=0;
    for(i=0;i<n;i++)
    {
        if(func(a[i])==1)
        {
           ind1=i;
            break;
        }
    }
    for(int j=n-1;j>=0;j--)
    {
        if(func(a[j])==1)
        {
            ind2=j;
            break;
        }
    }
    return abs(ind2-ind1);
}
