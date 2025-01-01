class Solution:
    def maxScore(self, s: str) -> int:
        total_one = s.count('1')

        lefts=0
        rights=total_one
        maxi=0

        for i in range(len(s)-1):
            if s[i] == '0':
                lefts+=1
            else:
                rights-=1
            
            maxi=max((lefts+rights),maxi)
        return maxi

        