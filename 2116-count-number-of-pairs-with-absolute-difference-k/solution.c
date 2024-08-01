int countKDifference(int* a, int n, int k) {
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(abs(a[i]-a[j])==k){
                cnt++;
            }
        }
    }
    return cnt;
}
