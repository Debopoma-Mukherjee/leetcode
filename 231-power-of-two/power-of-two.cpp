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
    bool isPowerOfTwo(int n) 
    {
       if(n==0)
        return false;
       if(ceil(log2(n))==floor(log2(n)))
            return true;
        return false;
    }

};