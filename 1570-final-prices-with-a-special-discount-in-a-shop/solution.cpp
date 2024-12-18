class Solution {
public:
    vector<int> finalPrices(vector<int>& a) {
        vector<int>res;
        for(int i=0;i<a.size();i++){
           // int ans=0;
            int price=a[i];
            for(int j=i+1;j<a.size();j++){
                if(a[j]<=price){
                    price=price-a[j];
                    break;
                }
            }
            res.push_back(price);
        }
        return res;
    }
};
