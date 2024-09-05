class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int reqsum=0;
        int sum=accumulate(rolls.begin(),rolls.end(),0);
        reqsum=(mean*(rolls.size()+n))-sum;
        if(reqsum>6*n || reqsum<n) return {};
        
        vector<int> result(n, 1);
    reqsum -= n;  // Since we've already assigned 1 to each roll
    
    for (int i = 0; i < n && reqsum > 0; i++) {
        int add = min(5, reqsum); 
        result[i] += add;
        reqsum -= add;
    }
    
    return result;
    }
};



//k+k=mean*(size+n)-sum
