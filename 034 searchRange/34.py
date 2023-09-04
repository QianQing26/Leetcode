class Solution:
    def searchRange(self, nums: list[int], target: int) -> list[int]:
        if target not in nums:
            return [-1,-1]
        else:
            left=nums.index(target)
            nums.sort(reverse=True)
            right=len(nums)-nums.index(target)-1
            return [left,right]