class Solution {
public:
    bool checkValidString(string s) {
        int l=0,h=0;
        //l = minimum possible number of unmatched '('
        //h = maximum possible number of unmatched '('
        //[l,h] contains range of possible balances

        //if s[i]=='('  l++,h++   if open increase balance
        //if s[i]==')'  l--,h--   if close decrease balance

        //                                         example [2,4]
        //if s[i]=='*'  ->consider '(' l++,h++;          [3,6]
        //              ->consider ')' l--,h--;          [1,3]
        //               so range is  [l--,h++];         [1,6] is possible range of balances.

        //if (best possible max balance)hi<0 then it means majority of ')' and is false
        //(best possible min balance)lo<0 can't happen 
        //   as we can make the string empty and leave lo as same instead of doing lo--;

        //the lo can contain values 0,1,2,....  and balance==0 the it is true 
        //                                          so lo==0 we return true;

        for(int i:s){
            if(i==')'){
                l--;
                h--;
            }else if(i=='('){
                l++;
                h++;
            }else{
                l--;
                h++;
            }
            if(h<0) return false;
            l=max(0,l);
        }
        return l==0;
    }
};