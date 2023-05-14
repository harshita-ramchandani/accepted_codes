// https://leetcode.com/problems/longest-common-prefix/

class Solution(object):
    def longestCommonPrefix(self, strs):
        # strs = ["flower","flow","flight"]

        from itertools import takewhile

        res="".join(c[0] for c in takewhile(lambda x:all(x[0]==y for y in x),zip(*strs)))

        return(res)
