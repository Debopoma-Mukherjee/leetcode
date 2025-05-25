class Solution {
public:
    /*
    if finally we get a 1 by keep on dividing by 2 it will be power of 2 otherwise in case of any other odd number ans not power of 2
    bool isPowerOfTwo(int n) 
    {
        if(n==1)
            return true;
        if(n%2!=0)
            return false;
        return isPowerOfTwo(n/2);
    }*/
    
    /*
    if a number is divisible by 2 then its log base 2 will be an integer number so floor and ceil of  log2(n) will be the same integer number.*/
    bool isPowerOfTwo(int n) 
    {
       if(n==0)
        return false;
       if(ceil(log2(n))==floor(log2(n)))
            return true;
        return false;
    }

};