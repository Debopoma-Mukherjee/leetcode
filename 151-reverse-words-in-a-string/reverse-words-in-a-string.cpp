class Solution {
public:

    
    string reverseWords(string s) 
    {
        stack<string> st;
        string temp="";
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                if(temp!="")
                {
                     st.push(temp);
                     
                }
                temp="";
            }   
            else 
                temp=temp+s[i];
        }
        if(temp!="")
            st.push(temp);
        string result="";
        while(st.size()>1)
        {
            result=result+st.top()+" ";
            st.pop();

        }
        result=result+st.top();
        return result;
    }
};