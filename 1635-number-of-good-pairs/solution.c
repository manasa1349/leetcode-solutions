int numIdenticalPairs(int* a, int n) {
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j] && i<j)
            {
                cnt++;
            }
        }
    }
    return cnt ;
}
