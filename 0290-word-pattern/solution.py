class Solution:
    def wordPattern(self, l: str, strng: str) -> bool:
        s=strng.split(' ')
        if len(s)!=len(l):
            return False
        lw={}
        wl={}
        for i in range(len(l)):
            if l[i] in lw and lw[l[i]]!=s[i]:
                return False 
            if s[i] in wl and wl[s[i]]!=l[i]:
                return False
            lw[l[i]]=s[i]
            wl[s[i]]=l[i]
        return True

