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
        string maxNum = num;
        string minNum = num;
        for(int i = 0; i < num.size(); i++){
            if(maxNum[i] == mxelmnt) maxNum[i] = '9';
            if(minNum[i] == mnelmnt){
                if(mnelmnt == num[0])
                    minNum[i] = '1';
                else
                    minNum[i] = '0';
            }
        }

        return stoi(maxNum) - stoi(minNum);
    }
};
