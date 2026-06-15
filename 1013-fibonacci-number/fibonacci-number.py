class Solution(object):
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
        