int evalRPN(char** tokens, int ts) {
    int st[10001];
    int top=-1;
    for(int i=0;i<ts;i++)
    {
        char ch=tokens[i][0];
        int size=strlen(tokens[i]);
        if(size==1 && (ch=='+' || ch=='-' || ch=='*' || ch=='/')){
            int op2=st[top];
            top--;
            int op1=st[top];
            top--;
            int res;
            if(ch=='+') res=op1+op2;
            else if(ch=='-') res=op1-op2;
            else if(ch=='*') res=op1*op2;
            else if(ch=='/') res=op1/op2;
            st[++top]=res;
        }else{
            //atoi()
            st[++top]=atoi(tokens[i]);
        }
    }
    return st[top];
}
