class Solution:
    def mySqrt(self, x: int) -> int:
        if x==0:
            return 0
        if x==1:
            return 1
        left=1
        right=x-1
        while left<=right:
            middle=(left+right)//2
            if middle*middle>x:
                right=middle-1
            else:
                left=middle+1
        return right