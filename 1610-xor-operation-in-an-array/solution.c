int xorOperation(int n, int start) {
    int k = 0;
    
    for (int i = 0; i < n; i++) {
        int num = start + 2 * i;
        k ^= num;
    }
    
    return k;
}
