int xorOperation(int n, int start) {
    int a[1000]={0},k=start;
    for(int i=0;i<n;i++)
    {
        a[i]=start+2*i;
    }
    for(int i=1;i<n;i++)
    {
        k=k^a[i];
    }
     return k;
}
