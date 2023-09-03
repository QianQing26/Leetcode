# collections.defaultdict()类默认参数为None，可以直接添加新的key，新key的默认参数为None
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        dic=collections.defaultdict(int)
        for i in range(0,len(s)):
            dic[s[i]]+=1
            dic[t[i]]-=1
        for val in dic.values():
            if val!=0:
                return False
        return True