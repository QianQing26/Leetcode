class Solution:
    def sortedSquares(self, nums: list[int]) -> list[int]:
        result=[num**2 for num in nums]
        result.sort()
        return result