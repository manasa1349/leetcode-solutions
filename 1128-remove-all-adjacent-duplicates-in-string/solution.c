char* removeDuplicates(char* s) {
    char *st=malloc(strlen(s)+1);
    int top=-1;
    //int size=strlen(s);
    st[++top]=s[0];
    for(int i=1;i<strlen(s);i++)
    {
        if(top!=-1&&s[i]==st[top] )
        {
            top--;
        }
        else
        {
            st[++top]=s[i];
        }
    }
    st[++top]='\0';
    return st;
}
