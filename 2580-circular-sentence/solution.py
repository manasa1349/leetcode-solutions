class Solution:
    def isCircularSentence(self, s: str) -> bool:
        for i in range(len(s)):
            if(s[i]==' '):
                if(s[i-1]!=s[i+1]):
                    return False
        if(s[0]!=s[len(s)-1]):
            return False
        return True
