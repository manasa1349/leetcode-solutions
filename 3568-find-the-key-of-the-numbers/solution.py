class Solution:
    def number(self,n:int)->str:
        if len(str(n))==1:
            return "000"+str(n)
        elif len(str(n))==2:
            return "00"+str(n)
        elif len(str(n))==3:
            return "0"+str(n)
        else:
            return str(n)
        
    def generateKey(self, num1: int, num2: int, num3: int) -> int:
        n1=self.number(num1)
        n2=self.number(num2)
        n3=self.number(num3)
        k=""
        for i in range(4):
            a=min(n1[i],n2[i],n3[i])
            k+=a
        return int(k)            

        
