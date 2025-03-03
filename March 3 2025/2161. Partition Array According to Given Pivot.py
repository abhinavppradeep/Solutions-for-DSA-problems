class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        b=sorted(nums)
        c = [0] * len(b)  

        for i in range(len(b)):
            if b[i]==pivot:
                c[i] = b[i]
                af=i

        bf=0
        af+=1
        for i in range(len(b)):
            if nums[i]<pivot:
                c[bf]=nums[i]
                bf+=1
            elif nums[i]>pivot:
                c[af]=nums[i]
                af+=1

        return c