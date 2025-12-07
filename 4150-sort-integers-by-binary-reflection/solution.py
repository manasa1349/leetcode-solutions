class Solution:
    def sortByReflection(self, nums: List[int]) -> List[int]:   
        def func(n):
            if n==0:
                return 0
            b=bin(n)[2:]
            r=b[::-1]
            return int(r,2)
        return sorted(nums, key=lambda x: (func(x), x))
