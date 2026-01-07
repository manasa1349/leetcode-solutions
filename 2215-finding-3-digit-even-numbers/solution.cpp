class Solution {
public:
    set<int>res;
    void func(vector<int>&digits,vector<int>&ds,vector<int>&used){
        if(ds.size()==3){
            if(ds[0]!=0 && ds[2]%2==0){
                res.insert(ds[0]*100+ds[1]*10+ds[2]);
            }
            return;
        }
        for(int i=0;i<digits.size();i++){
            if(!used[i]){
                ds.push_back(digits[i]);
                used[i]=1;
                func(digits,ds,used);
                used[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>used(digits.size(),0);
        vector<int>ds;
        func(digits,ds,used);
        return vector<int>(res.begin(),res.end());
    }
};
