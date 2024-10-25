class Solution:
    def removeSubfolders(self, folder: List[str]) -> List[str]:
        folder.sort()
        ans=[]
        ans.append(folder[0])
        for i in range(1,len(folder)):
            last=ans[-1]+"/"
            if(folder[i].startswith(last)):
                continue
            else:
                ans.append(folder[i])

        return ans
