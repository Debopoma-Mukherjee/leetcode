"""
Recursion
class Solution(object):
    def f(self,n):
        if n==0:
            return 1
        if n==1:
            return 1
        left=self.f(n-1)
        right=self.f(n-2)
        return left+right
    def climbStairs(self, n):
       return self.f(n)
"""
"""
Memorization
class Solution(object):
    def f(self,dp,n):
        if n==0:
            return 1
        if n==1:
            return 1
        dp[n-1]=self.f(dp,n-1)
        dp[n-2]=self.f(dp,n-2)
        return dp[n-1]+dp[n-2]
    def climbStairs(self, n):
       dp=[-1 for i in range(n+1)]
       return self.f(dp,n)
"""
"""
Tabulation
"""
class Solution(object):
    def climbStairs(self, n):
       dp=list(range(n+1))
       dp[0]=1
       dp[1]=1
       for i in range(2,n+1):
         dp[i]=dp[i-1]+dp[i-2]
       return dp[n]