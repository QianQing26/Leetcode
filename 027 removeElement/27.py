class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        while val in nums:
            del nums[nums.index(val)]
        return len(nums)