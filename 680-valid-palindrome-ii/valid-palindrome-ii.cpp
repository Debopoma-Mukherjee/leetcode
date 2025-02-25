class Solution {
public:
    bool isPalindrome(string s,int left,int right)
    {
        while(left<=right)
        {
            if(s[left]==s[right])
            {
                left++;
                right--;
            }
            else
                return false;
        }
        return true;
    }
    bool validPalindrome(string s)
    {
        int n=s.length();
        int left=0;
        int right=n-1;
        while(left<=right)
        {
            if(s[left]==s[right])
            {
                left++;
                right--;
            }
            else
            {
                return isPalindrome(s,left+1,right)||isPalindrome(s,left,right-1);
            }
        }
        return true;
    }
};