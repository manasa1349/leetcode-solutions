class Solution:
    def maxScore(self, s: str) -> int:
        k=1
        ans=0
        n=len(s)
        while(k<n):
            cnt0=(s[0:k]).count('0')
            cnt1=(s[k:n]).count('1')
            ans=max(ans,cnt1+cnt0)
            k+=1
        return ans
        
