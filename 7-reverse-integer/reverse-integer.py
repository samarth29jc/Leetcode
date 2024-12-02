class Solution:
    def reverse(self, x: int) -> int:
        INT_MAX = 2**31 - 1
        INT_MIN = -2**31
        rev=0
        cnt=0
        if(x<0):
            cnt=1
            x=x* -1

        while(x>0):
            digit=x%10
            rev=(rev*10)+digit
            x=x//10
        if(cnt==1):
           rev= rev* -1
        if rev < INT_MIN or rev > INT_MAX:
            return 0 
        return rev
        