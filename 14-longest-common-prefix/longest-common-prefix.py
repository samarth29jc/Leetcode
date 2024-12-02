class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort()
        ans=""
        if not strs:
            return ""
        first,last=strs[0],strs[-1]
        n=min(len(first),len(last))
        for i in range(n):
            if (first[i]==last[i]):
                ans+=first[i]
            else:
                break
        return ans



        