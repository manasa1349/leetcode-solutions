class Solution:
    def countPrefixSuffixPairs(self, words: List[str]) -> int:
        res=0
        for i in range(len(words)-1):
            for j in range(i+1,len(words)):
                #if(words[i][0]==words[j][0] and words[i][-1]==words[j][-1]):
                if(words[j].startswith(words[i]) and words[j].endswith(words[i])):
                    print(words[i],words[j])
                    res+=1
                #elif(words[i].startswith(words[j]) and words[i].endswith(words[j]) ):
                #    print(words[i],words[j])
                #    res+=1
        return res
