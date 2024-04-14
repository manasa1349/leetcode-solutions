char* findLatestTime(char* s) {
    for(int i=0;s[i]!='\0';i++)
    {
        if(i==0 && s[i]=='?')
        {
            if(s[i+1]=='1' ||s[i+1]=='0')
                s[i]='1';
            else if(s[i+1]=='?')
                s[i]='1';
            else
                s[i]='0';
        }
        else if(i==1 && s[i]=='?')
        {
            if(s[i-1]=='1')
                s[i]='1';
            /*else if(s[i-1]=='?')
                s[i]='1';*/
            else
                s[i]='9';
        }
        else if (i==3 && s[i]=='?')
        {
            s[i]='5';
        }
        else if(i==4 && s[i]=='?')
        {
            s[i]='9';
        }
        
    }
    return s;
    
}
