class Solution:
    def calPoints(self, operations: List[str]) -> int:
        ans=[]
        for i in range(len(operations)):
            n=len(ans)
            if(operations[i]=="+"):
                a=int(ans[n-1])+int(ans[n-2])
                ans.append(str(a))
            elif(operations[i]=="D"):
                b=2*int(ans[n-1])
                ans.append(str(b))
            elif(operations[i]=="C"):
                ans.pop()
            else:
                ans.append(operations[i])
        summ=0
        for i in range(len(ans)):
            summ+=int(ans[i])
        return summ




        
