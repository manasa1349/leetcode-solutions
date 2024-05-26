
char* compressedString(char* word) {
    char *comp = (char*)malloc((2 * strlen(word) + 1) * sizeof(char));
    int j = 0;
    int count = 1;
    for (int i = 1; i <= strlen(word); i++) {
        if (i == strlen(word) || word[i] != word[i-1]) {
            comp[j++] = '0' + count;
            comp[j++] = word[i-1];
            count = 1;
        } else {
            count++;
            if (count > 9) {
                comp[j++] = '9';
                comp[j++] = word[i-1];
                count = 1;
            }
        }
    }
    comp[j] = '\0';
    return comp;
}
