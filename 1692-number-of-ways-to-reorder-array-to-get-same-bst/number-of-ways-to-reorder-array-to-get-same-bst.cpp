class Solution {
public:
    vector<vector<long long>>arr;
    const long long MOD=1e9+7;
    long long func(vector<int>&nums){
        int n=nums.size();

        // BASE CASE:
        // For 0, 1 or 2 nodes, there is only 1 valid ordering
        // that produces the same BST.
        if(n<=2) return 1;
        
        vector<int>l,r;

        // The first element is the root of the BST.
        // Elements smaller than root go to the left subtree.
        // elements greater than root go to the right subtree.
        for(int i=1;i<n;i++){
            if(nums[i]<nums[0]){
                l.push_back(nums[i]);
            }else{
                r.push_back(nums[i]);
            }
        }

        int lsz=l.size(),rsz=r.size();
        // lsz + rsz = n - 1 (all elements except the root).
        //
        // arr[lsz + rsz][lsz] = C(lsz + rsz, lsz).
        // It counts the ways to choose positions for LEFT-subtree elements among all positions after the root.
        // The remaining positions automatically belong to the RIGHT subtree.
        //
        // We must preserve the relative order of elements within each subtree, but can interleave left and right elements.

        long long ans=arr[lsz+rsz][lsz];

        // Recursively count valid reorderings within each subtree.
        // Multiply because the left and right subtree orders can be chosen independently for every valid interleaving.
        ans=(ans*func(l))%MOD;
        ans=(ans*func(r))%MOD;
        return ans;
    }
    int numOfWays(vector<int>& nums) {
        int n=nums.size();

        // Precompute combinations using Pascal's Triangle.
        // arr[i][j] = C(i, j), the number of ways to choose j elements from i elements.
        arr.assign(n,vector<long long>(n,0));
        for(int i=0;i<n;i++){
            // C(i, 0) = 1: choose nothing in exactly one way.
            // C(i, i) = 1: choose everything in exactly one way.
            arr[i][0]=arr[i][i]=1;
            for(int j=1;j<i;j++){
                // Pascal's Triangle recurrence:
                // C(i, j) = C(i-1, j-1) + C(i-1, j).
                // Each inner value is the sum of the two values above it. 
                arr[i][j]=(arr[i-1][j]+arr[i-1][j-1])%MOD;
            }
        }
        // func(nums) counts ALL valid reorderings, including the original array. Subtract 1 to exclude the original.
        return (func(nums)-1)%MOD;
    }
};