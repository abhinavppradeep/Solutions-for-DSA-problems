class Solution:
    def maxCount(self, banned: List[int], n: int, maxSum: int) -> int:
        banset = set(banned)
        sum=0
        count=0

        for i in range(1, n+1):
            if i not in banset and sum+i<=maxSum:
                sum+=i
                count+=1
        return count
        