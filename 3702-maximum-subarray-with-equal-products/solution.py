class Solution:
    def maxLength(self, nums: List[int]) -> int:
        n=len(nums)
        max_length = 0
        for i in range(n):
            prod = 1
            curr_lcm = nums[i]
            curr_gcd = nums[i]
            for j in range(i, n):
                prod *= nums[j]
                curr_gcd = gcd(curr_gcd, nums[j])
                curr_lcm = lcm(curr_lcm, nums[j])
                if prod == curr_lcm * curr_gcd:
                    max_length = max(max_length, j - i + 1)
        return max_length
                
