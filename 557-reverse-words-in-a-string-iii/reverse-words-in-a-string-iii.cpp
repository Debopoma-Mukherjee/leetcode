class Solution {
public:
    string reverseWords(string s) 
    {
        int n=s.length();
        string temp="";
        string result="";
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                reverse(temp.begin(),temp.end());
                result=result+temp+" ";
                temp="";
            }    
            else
            {
                temp=temp+s[i];
            }
        }
        reverse(temp.begin(),temp.end());
        result=result+temp;
        return result;
    }
};