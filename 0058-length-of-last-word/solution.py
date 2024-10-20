class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        li=[]
        li=s.split()
        return len(li[-1])
        
