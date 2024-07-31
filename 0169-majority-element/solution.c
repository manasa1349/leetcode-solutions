int majorityElement(int* a, int n) {
    int major=a[0];
    int occ=1;
    for(int i=1;i<n;i++){
        if(major!=a[i]){
            occ--;
        }else{
            occ++;
        }if(occ==0){
            major=a[i];
            occ=1;
        }
    }
    return major;
}
