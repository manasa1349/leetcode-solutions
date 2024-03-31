int sumfunc(int x)
{
    int s=0;
    while(x>0)
    {
      s+=x%10;
      x/=10;
    }
    return s;
}
int sumOfTheDigitsOfHarshadNumber(int x) {
    int sum=sumfunc(x);
    if(x%sum==0)
    {
        return sum;
    }
    else
    {
        return -1;
    }
    
}
