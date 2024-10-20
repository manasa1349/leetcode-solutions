class Solution:
    def stringSequence(self, target: str) -> List[str]:
        ans=[]
        n=len(target)
        s=""
        for i in target:
            s+="a"
            ans.append(s)
            while(s[-1]!=i):
                k=chr(((ord(s[-1]) - ord('a') + 1) % 26) + ord('a'))
                s=s[:-1]+k
                ans.append(s);
        return ans

