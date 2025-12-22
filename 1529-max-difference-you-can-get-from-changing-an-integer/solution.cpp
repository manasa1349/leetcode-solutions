class Solution {
public:
    int maxDiff(int str) {
        string num=to_string(str);
        int mni=0;
        for(mni=0;mni<num.size();mni++){
            if(num[mni]>'1'){
                break;
            }
        }
        int mxi=0;
        for(mxi=0;mxi<num.size();mxi++){
            if(num[mxi]<'9'){
                break;
            }
        }
        char mnelmnt=num[mni];
        char mxelmnt=num[mxi];
        int k=num[0];
        for(int i = 0; i < num.size(); i++){
            char mx=(num[i]==mxelmnt)?'9':num[i];
            char mn=(num[i] == mnelmnt)?(
                        (mnelmnt == k)?'1':'0'
                    ):num[i];
            num[i]=((mx-'0')-(mn-'0'))+'0';
        }
        return stoi(num);
    }
};
