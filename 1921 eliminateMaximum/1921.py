class Solution:
    def eliminateMaximum(self, dist: list[int], speed: list[int]) -> int:
        times=[(d-1)//s for d,s in zip(dist,speed)]
        times.sort()
        for i,t in enumerate(times):
            if t<i:
                return i
        return len(times)