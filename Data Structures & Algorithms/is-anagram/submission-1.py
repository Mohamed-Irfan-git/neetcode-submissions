class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        freq1 = [0] *26
        freq2 = [0] * 26

        for ch in s:
            index = ord(ch) - ord('a')
            freq1[index]+=1

        
        for ch in t:
            index = ord(ch) - ord('a')
            freq2[index]+=1
        

        if freq1 == freq2:
            return True
        
        return False

