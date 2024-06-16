int countCompleteDayPairs(int* a, int n) {
    int cnt=0,k=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int k=a[i]+a[j];
            if(k%24==0){
                cnt++;
            }
            k=0;
        }
    }
    return cnt;
}
