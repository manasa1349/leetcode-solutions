class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='I' && s[i+1]=='V'){
                ans+=4;
                i++;
            }else if(s[i]=='I' && s[i+1]=='X'){
                ans+=9;
                i++;
            }else if(s[i]=='X' && s[i+1]=='L'){
                ans+=40;
                i++;
            }else if(s[i]=='X' && s[i+1]=='C'){
                ans+=90;
                i++;
            }else if(s[i]=='C' && s[i+1]=='D'){
                ans+=400;
                i++;
            }
            else if(s[i]=='C' && s[i+1]=='M'){
                ans+=900;
                i++;
            }else{
                switch(s[i]){
                    case 'I':
                    ans+=1;
                    break;
                    case 'V':
                    ans+=5;
                    break;
                    case 'X':
                    ans+=10;
                    break;
                    case 'L':
                    ans+=50;
                    break;
                    case 'C':
                    ans+=100;
                    break;
                    case 'D':
                    ans+=500;
                    break;
                    case 'M':
                    ans+=1000;
                    break;
                }
            }
        }
        return ans;
    }
};
