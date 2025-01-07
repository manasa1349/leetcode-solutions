class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        res=[]
        for i in range(len(words)):
            substring=words[i]
            if(any(substring in words[j] for j in range(len(words)) if j!=i)):
                res.append(substring)
        return res
            
