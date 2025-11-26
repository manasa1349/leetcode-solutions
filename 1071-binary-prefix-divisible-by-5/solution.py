class Solution:
    def prefixesDivBy5(self, nums: List[int]) -> List[bool]:
        k="0"
        li=[]
        for i in range(0,len(nums),1):
            k=k+str(nums[i])
            if(int(k,2)%5==0):
                li.append(True)
            else:
                li.append(False)
        return li
