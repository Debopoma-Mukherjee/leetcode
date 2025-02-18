class Solution {
public:
    string clearDigits(string s) 
    {
        int n=s.length();
        string result="";
        stack<char> st;
        for(int i=0;i<n;i++)
        {
            if(isalpha(s[i]))
                st.push(s[i]);
            else
            {
                if(!st.empty())
                    st.pop();
            }
                

        }
        while(!st.empty())
        {
            char temp=st.top();
            result=temp+result;
            st.pop();
        }
        return result;
    }
};