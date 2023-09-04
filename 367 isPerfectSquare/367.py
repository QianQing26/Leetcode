class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        if num==1:
            return True
        left=1
        right=num-1
        while left<=right:
            middle=(left+right)//2
            if middle*middle==num:
                return True
            elif middle*middle > num:
                right=middle-1
            else:
                left=middle+1
        return False