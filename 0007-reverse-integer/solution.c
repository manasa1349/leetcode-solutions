int reverse(int x){
    long long rev=0;
    while(x){
        long long k=x%10;
        rev=rev*10+k;
        x/=10;
    }
    if(rev>= pow(-2,31) && rev <= pow(2,31) - 1){
        return rev;
    }else
    return 0;
}
