class Solution:
    def convertDateToBinary(self, date: str) -> str:
        li=[]
        li=date.split("-")
        k=[]
        for i in li:
            k.append(format(int(i),'b'))
        ans=str(k[0])+"-"+str(k[1])+"-"+str(k[2])
        return ans
