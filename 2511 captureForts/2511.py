class Solution:
    def captureForts(self, forts: list[int]) -> int:
        ans=0
        pre=-1
        for i,fort in enumerate(forts):
            if fort==-1 or fort==1:
                if pre>=0 and fort!=forts[pre]:
                    ans=max(ans,i-pre-1)
                pre=i
        return ans