// https://leetcode.com/problems/roman-to-integer/

class Solution:
    def romanToInt(self, s: str) -> int:
        d={'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
        # x='IX'
        t=0
        for i in range(len(s)):
              if(i==0):
                 t+=d[s[i]]
              else:
                 if(d[s[i]]>d[s[i-1]]):
                    t=t+d[s[i]]-2*d[s[i-1]]
                 else:
                    t+=d[s[i]]
        return t
