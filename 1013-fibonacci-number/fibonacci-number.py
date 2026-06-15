"""class Solution(object):
    def fibonacci(self,dp,n):
        if(n<=1):
            return n
        if(dp[n]!=-1):
            return dp[n]
        dp[n]=self.fibonacci(dp,n-1)+self.fibonacci(dp,n-2)
        return dp[n]
    def fib(self, n):
        dp=[-1 for i in range(n+1)]
        return self.fibonacci(dp,n)
"""
class Solution(object):
    def fib(self, n):
        dp=list(range(n+1))
        if n==0:
            return 0
        dp[0]=0
        dp[1]=1
        for i in range(2,n+1):
            dp[i]=dp[i-1]+dp[i-2]
        return dp[n]