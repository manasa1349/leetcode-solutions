class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        nums[:]=sorted(set(nums))
       # a=list(s)
        return len(nums)
