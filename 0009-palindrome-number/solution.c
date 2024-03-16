bool isPalindrome(int x) {
    if(x<0 || x!=0 && x%10 ==0 ) return false;
    int rev=0;
    while(x>rev)
    {
    //int k=x%10;
    rev=rev*10+x%10;
    x/=10;
    }
    return (rev==x || x==rev/10);
}
