class Solution {
public:
char toLowercase(char ch)
    {
        if((ch>='a' && ch<='z')||(ch>='0' && ch<='9'))
            return ch;
        else
            return (char)((int)ch+32);
            
    }
    bool isPalindrome(string s) 
    {
        int n=s.length();
        int left=0;
        int right=s.length()-1;
        while(left<right)
        {
           if(!isalpha(s[left])&&!isdigit(s[left]))
              left++;
           else if(!isalpha(s[right])&&!isdigit(s[right]))
              right--;
           else if((toLowercase(s[left]))!=(toLowercase(s[right])))
                return false;
            else
           {
                left++;
                right--;
           } 

        }
        return true;
    }
};