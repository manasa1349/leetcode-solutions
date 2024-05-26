int numberOfPairs(int* a, int m, int* b, int n, int k) {
    int cnt=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i]%(b[j]*k)==0){
                cnt++;
            }
        }
    }
    return cnt;
}
