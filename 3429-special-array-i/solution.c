int even(int n){
    if(n%2==0){
        return 1;
    }
    return 0;
}
int odd(int n){
    if(n%2!=0){
        return 1;
    }
    return 0;
}
bool isArraySpecial(int* a, int n) {
    int cnt=0;
    for(int i=0;i<n-1;i++){
        if((even(a[i])&&even(a[i+1])) || (odd(a[i])&&odd(a[i+1]))){
            cnt=1;
            break;
        }
           
    }
    if(cnt==1){
        return false;
    }else{
        return true;
    }
}
