class Solution {
public:
    bool func(vector<vector<int>>& arr, vector<vector<int>>& target){
        vector<vector<int>>a(arr.begin(),arr.end());
        bool chk=true;
        int n=a.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=a[n-j-1][i];
                if(a[n-j-1][i]!=target[i][j]){
                    chk=false;
                }
            }
        }
        return chk;
    }
    bool findRotation(vector<vector<int>>& arr, vector<vector<int>>& target) {
        if(func(arr,target)){//90 deg
            return true;
        }
        if(func(arr,target)){//180 deg
            return true;
        }
        if(func(arr,target)){//270deg
            return true;
        }
        if(func(arr,target)){//360 or 0 deg
            return true;
        }
        return false;
    }
};