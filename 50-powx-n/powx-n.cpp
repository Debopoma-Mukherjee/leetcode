class Solution {
public:
    double myPow(double x, int n) 
    {
        //Approach1 recursion depth very high plus in integer case -2,147,483,648 to 2,147,483,647 negative has 8 and positive has 7 so in negative there is 1 extra so to accomodate it while changing to +ve we need to change n to long long.
        /*if(n==0)
         return 1;
        if(n>0)
            return x*myPow(x,n-1);
        else
            return (1/x)*myPow(x,n+1);
        */
        //Approach2 time complexity O(n) =>TLE
        /*double ans=1;
        long long nn=n;
        if(n<0)
            nn=-n;
        for(long long i=1;i<=nn;i++)
            ans=ans*x;
        if(n<0)
            ans=1/ans;
        return ans;*/
        double ans=1;
        long long nn=n;
        if(n<0)
            nn=-nn;
        while(nn>=1)
            if(nn%2==0)
            {
                x=x*x;
                nn=nn/2;
            }    
            else
            {
                ans=ans*x;
                nn=nn-1;
            }    
        if(n<0)
           ans=1/ans;
        return ans;
    }
};