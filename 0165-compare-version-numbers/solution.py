class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        a1=version1.split('.')
        a2=version2.split('.')
        for i in a1:
            if i.count('0')>1:
                i=i.lstrip('0')
        for i in a2:
            if i.count('0')>1:
                i=i.lstrip('0')
        n1=len(a1)
        n2=len(a2)
        k=min(n1,n2)
        for i in range(0,k):
            print(a1[i],a2[i])
            if int(a1[i])<int(a2[i]):
                return -1
            elif int(a1[i])>int(a2[i]):
                return 1
        if(n1<n2):
            for i in range (n1,n2):
                if int(a2[i])>0:
                    return -1
        else:
            for i in range (n2,n1):
                if int(a1[i])>0:
                    return 1
        return 0

        
