class Solution:
    def numberOfSpecialChars(self, words: str) -> int:
        cnt=0
        word=set(words)
        for i in word:
            if(i>='a' and i<='z'):
                if(chr(ord(i)-32) in word):
                    cnt+=1
            elif(i>='A' and i<='Z'):
                if(chr(ord(i)+32) in word):
                    cnt+=1
        return cnt//2
        
