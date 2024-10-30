class Solution:
    def prefixesDivBy5(self, nums: List[int]) -> List[bool]:
        ans=[]
        k=""
        for i in range(len(nums)):
            k+=str(nums[i])
            if(int(k,2)%5==0):
                ans.append(True)
            else:
                ans.append(False)
        return ans
        
