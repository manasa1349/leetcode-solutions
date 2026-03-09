class Solution {
public:
    string intToRoman(int n) {
        unordered_map<int,string>mp;
        mp[1]="I";
        mp[5]="V";
        mp[10]="X";
        mp[50]="L";
        mp[100]="C";
        mp[500]="D";
        mp[1000]="M";
        mp[4]="IV";
        mp[9]="IX";
        mp[40]="XL";
        mp[90]="XC";
        mp[400]="CD";
        mp[900]="CM";
        string str="";
        int p=1;
        while(n){
            int val=n%10;
            string ans="";
            if(val==1||val==5||val==4||val==9){
                ans+=mp[val*p];
            }else{
                //2 3 6 7 8
                if(val<5){
                    for(int i=0;i<val;i++){
                        ans+=mp[p];
                    }
                }else{
                    ans+=mp[5*p];
                    for(int i=0;i<val-5;i++){
                        ans+=mp[p];
                    }
                }
            }
            str=ans+str;
            p*=10;
            n/=10;
        }
        return str;
    }
};