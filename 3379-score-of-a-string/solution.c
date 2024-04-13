int scoreOfString(char* s) {
    int n=strlen(s);
    int sum=0;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        a[i]=s[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int j=i+1;
        sum+=abs(a[i]-a[j]);
        j=0;
    }
    return sum;
}
