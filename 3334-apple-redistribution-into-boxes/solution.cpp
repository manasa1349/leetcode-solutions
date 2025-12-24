class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.rbegin(),capacity.rend());
        int sum=accumulate(apple.begin(),apple.end(),0);
        for(int i=0;i<capacity.size();i++){
            cout<<sum<<" ";
            sum-=capacity[i];
            if(sum<=0){
                return i+1;
            }
        }
        return 0;
    }
};
