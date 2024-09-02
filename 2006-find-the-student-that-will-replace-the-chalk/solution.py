class Solution:
    def chalkReplacer(self, chalk: List[int], k: int) -> int:
        summ=sum(chalk)
        n=len(chalk)
        #cycle=summ//n
        #newk=k-cycle*summ
        k%=summ
        ans=0
        for i in range(n):
            if(k < chalk[i]):
                ans=i
                break
            k-=chalk[i]
        return ans
                

        
