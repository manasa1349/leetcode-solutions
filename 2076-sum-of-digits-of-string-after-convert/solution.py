class Solution:       
    def getLucky(self, st: str, k: int) -> int:
        s=""
        for i in st:
            s+=str(ord(i)-96)
        while(k>0):
            ssum=0
            for i in s:
                ssum+=int(i)
            s=str(ssum)
            k-=1
        return int(s)
            
                

        
