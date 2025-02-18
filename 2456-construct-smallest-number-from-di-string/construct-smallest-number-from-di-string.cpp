class Solution {
public:
    string smallestNumber(string pattern) 
    {
        int n=pattern.length();
        stack<int> st;
        string result="";
        for(int i=0;i<=n;i++)
        {
            st.push(i+1);
            if(pattern[i]=='I'||i==n)
            {
                while(!st.empty())
                {
                    result=result+to_string(st.top());
                    st.pop();
                }
                
            }

        }
        return result;
    }
};