/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findIntersectionValues(int* a, int m, int* b, int n, int* returnSize) {
    int cnt1=0,cnt2=0,v=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j] && v==0){
                cnt1++;
                v=1;
            }
        }
        if(v==1) v=0;
    }
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[i]==a[j] && s==0){
                cnt2++;
                s=1;
            }
        }
        if(s==1) s=0;
    }
    *returnSize=2;
    int *arr=(int *)malloc(2*sizeof(int));
    arr[0]=cnt1;
    arr[1]=cnt2;
    return arr;
}
