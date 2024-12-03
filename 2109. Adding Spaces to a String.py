class Solution:
    def addSpaces(self, s: str, spaces: List[int]) -> str:
        result = []
        prev=0

        for index in spaces:
            result.append(s[prev:index])
            result.append(" ")
            prev = index
        
        result.append(s[prev:])
        return "".join(result)