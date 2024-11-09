class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        str=s+s
        if(len(goal)<len(s)):
            return False
        if(goal in str):
            return True
        else:
            return False
