#快慢同向双指针法
class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        slow=fast=0
        n=len(nums)
        maxCnt=0
        while slow<n:
            if nums[slow]!=1:
                slow+=1     #找到第一个1
            else:
                fast=slow   #开始移动窗口
                while fast<n and nums[fast]==1:
                    fast+=1
                maxCnt=max(maxCnt,fast-slow)
                slow=fast   #更新指针位置，继续循环
        return maxCnt