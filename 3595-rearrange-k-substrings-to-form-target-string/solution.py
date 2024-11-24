class Solution:
    def isPossibleToRearrange(self, s: str, t: str, k: int) -> bool:
        li1=[]
        li2=[]
        n=len(s)
        n1=len(t)
        li1=[s[i:i+(n//k)] for i in range(0, n, (n//k))]
        li2=[t[i:i+(n1//k)] for i in range(0, n1, (n1//k))]
        li1.sort();
        li2.sort();
        for i in range(len(li1)):
            if(li1[i]!=li2[i]):
                return False
        return True
