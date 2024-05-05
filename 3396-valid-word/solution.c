bool isValid(char* s) {
    int d=0,v=0,c=0,e=0;
    for(int i=0;i<strlen(s);i++){
        if(isdigit(s[i])){
            d++;
        }
        else if(isalpha(s[i])){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                v++;
            }else{
                c++;
            }
        }
        else{
            e++;
        }
    }
    if(strlen(s)>=3 && e==0 && v>=1 && c>=1){
        return true;
    }
    else{
        return false; 
    }
}
