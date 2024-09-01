class Solution:
    def white(self,string:str)->bool:
        s1="aceg"
        s2="1357"
        s3="bdfh"
        s4="2468"
        if((string[0] in s1 and string[1] in s2) or(string[0] in s3 and string[1] in s4)):
            return True
        else:
            return False
    def black(self,string:str)->bool:
        s1="aceg"
        s2="1357"
        s3="bdfh"
        s4="2468"
        if((string[0] in s3 and string[1] in s2)or (string[0] in s1 and string[1] in s4)):
            return True
        else:
            return False
    def checkTwoChessboards(self, coordinate1: str, coordinate2: str) -> bool:
        if(self.white(coordinate1)  and self.white(coordinate2)):
            return True
        elif(self.black(coordinate1) and self.black(coordinate2)):
            return True
        else:
            return False
                
        
