class Solution {
public:
    /*long long binary_exponentiation(long long x,int n)
    {
        long long ans=1;
        int mod=1e9+7;
        while(n>0)
        {
            if(n%2==0)
            {
                x=(x*x)%mod;
                n=n/2;
            }
            else
            {
                ans=(ans*x)%mod;
                n=n-1;
            }
        }
        return ans%mod;
    }
    int minNonZeroProduct(int p) 
    {
        int mod=1e9+7;
        long long last_value=(binary_exponentiation(2,p))-1;
        long long product=(binary_exponentiation(last_value-1,(last_value-1)/2));
        long long ans=((product)*(last_value%mod))%mod;
        return ans;
    }*/
 
    const long long mod = 1e9 + 7;

    long long binary_exponentiation(long long x, long long n) {
        long long ans = 1;
        x %= mod;
        while (n > 0) {
            if (n % 2 == 1)
                ans = (ans * x) % mod;
            x = (x * x) % mod;
            n /= 2;
        }
        return ans;
    }

    int minNonZeroProduct(int p) {
        long long last_value =(long long) pow(2,p)- 1;
        long long product = binary_exponentiation(last_value - 1, last_value / 2);
        long long ans = (product * (last_value % mod)) % mod;
        return ans;
    }


};