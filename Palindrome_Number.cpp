// https://leetcode.com/problems/palindrome-number/

class Solution:
    def isPalindrome(self, x: int) -> bool:
        #x=121
        num=x
        r=0
        if(x<0):
           print('false')
        else:
           while num:
              r=r*10+num%10
              num //=10

        return r==x

